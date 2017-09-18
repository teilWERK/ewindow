local ffi = require "ffi"

local function load_header(hdr)
	--print ("-- LOAD HEADER --", hdr)
	local f = io.open(hdr, "rb")
	local content = f:read("*all")
	f:close()
	content = content:gsub("#ifdef.-#endif", "\n")
	content = content:gsub("\\\n", "")
	content = content:gsub("#[^\n]-\n", "\n")
	--content = content:gsub("\n[^\n]-inline.-{.-({[^}]+})?.-}", "\n")
	
	ffi.cdef(content)
	return content
end

load_header "include.h"

local PL = ffi.typeof("struct pl")
ffi.metatype(PL, {
	__tostring = function (self)
		return ffi.string(self.p, self.l)
	end})


return ffi.load("baresip")