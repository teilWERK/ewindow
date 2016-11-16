#!/bin/bash -ex

DIALOG=whiptail

mkdir -p config

if [ $1 ]; then
  CHOICE="$1"
else
  CHOICE=$(whiptail --menu "EWindow Configuration Menu" \
	20 100 10 \
	"Hostname" "Set E-Window Hostname" \
	"Description" "Change long description of this EWindow instance" \
	"WiFi" "Enter Network Configuration" \
	"Update" "Pull the newest version of this Software" \
	"OS Shell" "Start a Command Line Prompt" \
	3>&1 1>&2 2>&3 )
fi

function do_hostname() {
  if [ $(whoami) != "root" ]; then
    dialog --msgbox "This needs to be run as root. Exiting" 10 40
    exit 23
  fi

#  if [[ -f config/hostname ]]; then
#    echo hostname configured
#  else
    HOSTNAME=$(whiptail --inputbox "Please enter the new hostname (with .ewindow.org)" 10 60 "$(<config/hostname)" \
	3>&1 1>&2 2>&3 )
    hostname "$HOSTNAME"
    echo -e "::1\t$HOSTNAME" >> /etc/hosts
    echo "$HOSTNAME" > config/hostname
#  fi
}


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
  wpa_cli reconf

  sleep 2

  wpa_cli stat

  #echo -e "network={\n" "$SSID_LINE" "\n" "$PSK_LINE" "\n}"
  # TODO: Write it somewhere relevant
}

function do_id() {
  $DIALOG --inputbox "Enter your assigned E-Window number" 10 40 $(cat config/id) 2>config/id
  ID=$(cat config/id)
  IP=10.7.7.$ID
  echo $IP > config/ip
}

set +e
case $CHOICE in
  WiFi)
    do_wifi
    ;;
  Hostname)
    do_hostname
    ;;
  Update)
    git pull
    ;;
  OS*)
    bash
    ;;
  *)

    echo "Not Implemented"
    exit 23
    ;;
esac

read
