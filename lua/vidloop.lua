local bs = require "baresip"
local ffi = require "ffi"
local utils = require "utilities"

local x11 = require "x11"
local gltex = require "gltexture"

local pthread = require "pthread.pthread"

--jit.off()
--jit.off(true, true)
--print("jit status", jit.status())

utils.init_baresip("/etc/ewindow", "EWindow Vidloop Test")

window = x11.create_window(1024, 768)
phandle = gltex.init_shaders()

local mutex = pthread.mutex{type = 'errorcheck'}

if not phandle then
	os.exit(1)
end


local lua = require "luastate.luastate"
function new_luastate()
	local state = lua.open()
	state:openlibs()
	state:push(function(handler)
		local ffi = require 'ffi'
		local bs = require "baresip"
		print ("FFI:", ffi)
		display_cb = ffi.cast('vidisp_disp_h*', handler)
		-- this needs to be stored somewhere so it's not garbage collected
		ffi.gc(display_cb, function() print ("Warning: Local Display callback gc'ed", display_cb) end)
		return tonumber(ffi.cast('intptr_t', display_cb))
	end)
	gcb = state:call(display_handler)
	local cb = ffi.cast('void *', gcb)

	ffi.gc(cb, function() print ("Warning: Display callback gc'ed") end)
	
	return state, cb
end

vidisp = ffi.new("struct vidisp*[1]")

newstate, display_handler_state = new_luastate()
--prevent the new state from being garbage collected


dhs = ffi.cast("vidisp_disp_h*", display_handler_state)

	result = bs.vidisp_register(vidisp,
	bs.baresip_vidispl(), "glupload",
	alloc_handler, update_handler, display_handler_state, nil)

print("vidisp_register: ", result)

bs.ui_input_str "/vidloop"

utils.timer(25, function()
--pthread.create_thread(function()
	mutex:lock()
	
	x11.make_current(window)
	gltex.draw_blit(phandle)
	x11.update(window)
	x11.make_current(window, false)

	mutex:unlock()
end)

bs.re_main(function (signal)
	print ("Signal: ", signal)
	os.exit()
end)
