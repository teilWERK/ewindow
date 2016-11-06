#!/bin/bash

mkdir -p config

dialog --menu "EWindow Configuration Menu" \
	20 100 10 \
	"WiFi" "Enter Network Configuration" \


dialog --inputbox "WiFi SSID" 10 40 "$(cat config/wifissid)" 2>config/wifissid

dialog --inputbox "Enter Wifi Password (leave empty for open networks)" 10 40 "$(cat config/wifipsk)" 2> config/wifipsk

SSID_LINE="ssid=\"$(cat config/wifissid)\""
PSK_LINE="key_mgmt=NONE"

if [ -n "$(cat config/wifipsk)" ]; then
  PSK_LINE="psk=\"$(cat config/wifipsk)\""
fi


echo -e "network={\n" "$SSID_LINE" "\n" "$PSK_LINE" "\n}"
