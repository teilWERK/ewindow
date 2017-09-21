local bs = require "baresip"
local ffi = require "ffi"
local utils = require "utilities"

local eglwindow = require "eglwindow"
local gltex = require "gltexture"

local pthread = require "pthread.pthread"

--jit.off()
--jit.off(true, true)
--print("jit status", jit.status())

utils.init_baresip("/etc/ewindow", "EWindow Vidloop Test")

window = eglwindow.create(1024, 768)
phandle = gltex.init_shaders()

if not phandle then
	os.exit(1)
end

-- Ugly: Global variable required by gltexture
mutex = pthread.mutex{type = 'errorcheck'}

gltex.register()

bs.ui_input_str "/vidloop"

utils.timer(25, function()
	mutex:lock()
	window:bind_context()
	
	gltex.draw_blit(phandle)
	window:update()

	mutex:unlock()
	window:unbind_context()
end)

bs.re_main(function (signal)
	print ("Signal: ", signal)
	os.exit()
end)
