#!/bin/bash -ex

mkdir -p config

CHOICE=$(whiptail --menu "EWindow Configuration Menu" \
	20 100 10 \
	"IP" "Enter IP Address Number" \
	"Hostname" "" \
	"Description" "Change long description of this EWindow instance" \
	"WiFi" "Enter Network Configuration" \
	"Update" "Pull the newest version of this Software" \
	3>&1 1>&2 2>&3 )


function do_wifi() {
  whiptail --inputbox "WiFi SSID" 10 40 "$(cat config/wifissid)" 2>config/wifissid
  whiptail --inputbox "Enter Wifi Password (leave empty for open networks)" 10 40 "$(cat config/wifipsk)" 2> config/wifipsk
#  SSID_LINE="ssid=\"$(cat config/wifissid)\""
#  PSK_LINE="key_mgmt=NONE"
  NETWORK_ID=$(wpa_cli -i wlan0 add_network)
  wpa_cli set_network $NETWORK_ID ssid \""$(cat config/wifissid)"\"

  if [ -n "$(cat config/wifipsk)" ]; then
    wpa_cli set_network $NETWORK_ID psk \""$(cat config/wifipsk)"\"
#    PSK_LINE="psk=\"$(cat config/wifipsk)\""
  else
    wpa_cli set_network $NETWORK_ID key_mgmt NONE
  fi

  wpa_cli select_network $NETWORK_ID
  wpa_cli save_config

  #echo -e "network={\n" "$SSID_LINE" "\n" "$PSK_LINE" "\n}"
  # TODO: Write it somewhere relevant
}

case $CHOICE in
  WiFi)
    do_wifi
    ;;
  Update)
    git pull
    ;;
  *)

    echo "Not Implemented"
    exit 23
    ;;
esac
