local bs = require "baresip"
local utils = require "utilities"

utils.init_baresip("/etc/ewindow", "EWindow Vidloop Test")
bs.ui_input_str "/vidloop"

--t = utils.timer(1000, function (arg)
--	for uri, presence in pairs(utils.contact_list()) do
--		print (tostring(uri.dname) .. ": ", presence)
--	end
--end)

bs.re_main(function (signal)
	print ("Signal: ", signal)
	os.exit()
end)
