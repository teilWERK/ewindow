# Check dependencies?

all: libbaresip.so peervpn

libbaresip.so: baresip re rem re/libre.a rem/librem.a
	make -C baresip libbaresip.so STATIC=1 LIBRE_SO=../re

baresip:
	git clone https://github.com/strfry/baresip -b master --depth=1

re:
	git clone https://github.com/creytiv/re --depth=1

rem:
	git clone https://github.com/creytiv/rem --depth=1

re/libre.a:
	make -C re libre.a
rem/librem.a:
	make -C rem librem.a

peervpn peervpn/peervpn:
	git clone https://github.com/peervpn/peervpn
	make -C peervpn
