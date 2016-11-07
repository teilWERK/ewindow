#!/bin/bash

mkdir -p config

CHOICE=$(dialog --menu "EWindow Configuration Menu" \
	20 100 10 \
	"IP" "Enter IP Address Number" \
	"Hostname" "" \
	"Description" "Change long description of this EWindow instance" \
	"WiFi" "Enter Network Configuration" \
	"Update" "Pull the newest version of this Software" \
	3>&1 1>&2 2>&3 )

case $CHOICE in
  Update)
    git pull
    ;;
  *)
    echo "Not Implemented"
    exit 23
    ;;
esac


function do_wifi() {
  dialog --inputbox "WiFi SSID" 10 40 "$(cat config/wifissid)" 2>config/wifissid
  dialog --inputbox "Enter Wifi Password (leave empty for open networks)" 10 40 "$(cat config/wifipsk)" 2> config/wifipsk
  SSID_LINE="ssid=\"$(cat config/wifissid)\""
  PSK_LINE="key_mgmt=NONE"

  if [ -n "$(cat config/wifipsk)" ]; then
    PSK_LINE="psk=\"$(cat config/wifipsk)\""
  fi

  echo -e "network={\n" "$SSID_LINE" "\n" "$PSK_LINE" "\n}"
  # TODO: Write it somewhere relevant
}

