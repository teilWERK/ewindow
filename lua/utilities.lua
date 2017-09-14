local M = {}

local ffi = require "ffi"
local bs = require "baresip"

local sat = ffi.typeof("struct contact*")

function M.init_baresip(conf_path, title)
	bs.libre_init()
	bs.conf_path_set(conf_path)
	bs.conf_configure()

	bs.log_enable_debug(true)
	bs.log_enable_info(true)

	local prefer_ipv6 = true
	bs.baresip_init(bs.conf_config(), prefer_ipv6)
	ret = bs.ua_init(title, true, true, true, prefer_ipv6)
	if ret ~= 0 then
		print "Error in ua_init(), exiting..."
		os.exit(ret)
	end
	
	bs.conf_modules()
end


function M.contact_list()
	local cs = bs.baresip_contacts()
	local cl = bs.contact_list(cs)

	local h = bs.list_head(cl)

	ret = {}

	while h ~= ffi.NULL do
		c = ffi.cast(sat, h)
		a = bs.contact_addr(c)
		uri = a.auri
		
		presence = bs.contact_presence(c)
		ret[a] = presence
		h = h.next
	end

	return ret
end

function M.timer(t, cb, arg)
	local timer = ffi.new("struct tmr")
	bs.tmr_init(timer)

	local function loop()
		bs.tmr_start(timer, t, loop, nil)
		cb(arg)
	end

	loop(arg)
	return timer
end

return M
