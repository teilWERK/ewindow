DESC="EWindow"

avahi-publish -s "$DESC" _sipuri._udp 5060 sip:ewindow@$(hostname).ewindow.org
