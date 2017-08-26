# Check dependencies?

libbaresip.so: baresip re rem re/libre.a rem/librem.a
	make -C baresip libbaresip.so STATIC=1 LIBRE_SO=../re LFLAGS="-u libre_init"

baresip:
	git clone https://github.com/strfry/baresip -b master

re:
	git clone https://github.com/creytiv/re

rem:
	git clone https://github.com/creytiv/rem

re/libre.a:
	make -C re libre.a
rem/librem.a:
	make -C rem librem.a

peervpn peervpn/peervpn:
	git clone https://github.com/peervpn/peervpn
	make -C peervpn

install: baresip
	make STATIC=1 -C baresip install-shared
	cp -r dotewindow /etc/ewindow

clean:
	rm -rf re rem baresip peervpn
