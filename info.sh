MAC=$(</sys/class/net/eth0/address)
V6ADDR=fde1:c0fe::`sed 's/.//3;s/.//8;s/.//13;' /sys/class/net/eth0/address`/64

WIFI="$(wpa_cli stat | grep wpa_state)"

dialog --msgbox \
"MAC Address :   $MAC\n"\
"IPv6 Address:   $V6ADDR\n"\
"WiFi State:     $WIFI" \
 8 55
