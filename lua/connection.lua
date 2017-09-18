local bs = require "baresip"
local ffi = require "ffi"
local utils = require "utilities"

utils.init_baresip("/etc/ewindow", "EWindow Connection Manager")

-- Hack for a baresip internal function
ffi.cdef[[
	void notifier_update_status(struct ua*);
]]

function set_presence_status(status)
	bs.ua_presence_status_set(bs.uag_current(), status)
	bs.notifier_update_status(bs.uag_current())
end

local ConnectionManager = {
	connection = nil
}

local function ua_event(uav)
	return ffi.new("enum ua_event", "UA_EVENT_CALL_" .. uav)
end

local events = {
	established = ua_event("ESTABLISHED"),
	closed = ua_event("CLOSED"),
	incoming = ua_event("INCOMING"),
	ringing = ua_event("RINGING"),
}

local presence = {
	unknown = ffi.new("enum presence_status", "PRESENCE_UNKNOWN"),
	open = ffi.new("enum presence_status", "PRESENCE_OPEN"),
	closed = ffi.new("enum presence_status", "PRESENCE_CLOSED"),
	busy = ffi.new("enum presence_status", "PRESENCE_BUSY"),
}

bs.uag_event_register(
	function (ua, event, all, prm, self)
		local self = ConnectionManager
		print("ConnectionManager", ua, event, call, prm, self)

		if event == events.established then
			print("Call established")
			set_presence_status(presence.busy)
			self.current_connection = bs.call_peeruri(call)
		elseif event == events.closed then
			print("Call closed, reason: ", prm)
			-- Re-connect in case of rtp error
			if string.find(prm, "rtp error") then
				bs.ua_connect(bs.uag_current(), 0, 0, uri, 0, 1)
			else
				self.current_connection = nil
			end

			set_presence_status(presence.open)
		elseif event == events.incoming then
			us = tostring(bs.ua_aor(bs.uag_current()))
			them = tostring(bs.call_peeruri(call))
			print(string.format("Incoming call handler: Us: %s Them: %s", us, them))
			if self.current_connection then
				if them == self.current_connection then
					if us < them then
						self.current_connection = them
						bs.ua_hold_answer(ua, call)
						print("Accepting call from our target")
						-- TODO: Hangup our outgoing call
					else
						bs.ua_hangup(ua, call, 0, "Don't call us we call you")
						print("Rejecting call from our target, we wait for answer")
					end
				else
					print("Rejecting call from", bs.call_peeruri(call))
					bs.ua_hangup(ua, call, 0, "We want to connect to someone else")
				end
			else
				bs.ua_hold_answer(ua, call)
				self.current_connection = them
			end
		else
			print("Unknown Event!!!", event)
		end
	end,
nil)

utils.timer(1000, function(self)
	if self.current_connection then
		return
	end

	set_presence_status(presence.open)

	-- Poll connections

	local candidates = {}

	for uri, status in pairs(utils.contact_list()) do
		if status == presence.open then
			print("Found connection candidate: ", uri.dname)
			table.insert(candidates, uri)
		end
	end

	if #candidates == 0 then return end

	-- Select random candidate from list
	uri = candidates[math.random(#candidates)]
	print("Connecting to " .. tostring(uri) .. "...")
	self.current_connection = uri
	bs.ua_connect(bs.uag_current(), nil, nil, tostring(uri.auri), nil, 1)
end,
ConnectionManager)

--timer(1000, function ()
--	print(utils.list_contacts())
--end)

bs.re_main(function (signal)
	print ("Signal: ", signal)
	os.exit()
end)
