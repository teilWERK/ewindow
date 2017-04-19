#!/bin/bash -e

# This script is intended for Raspbian
# It creates the "ewindow" user with auto-login

if [ $(whoami) == "root" ]; then
  echo Am Root
else
  echo Not Root, stopping...
  exit 23
fi

cd "$(dirname $0)"

systemctl set-default multi-user.target
ln -sf /etc/systemd/system/autologin@.service /etc/systemd/system/getty.target.wants/getty@tty1.service

# Setup EWindow autologin curses-UI

apt install -y dialog

sed -i -e "s/--autologin pi/--autologin ewindow/g" /etc/systemd/system/autologin@.service

useradd -G video,audio,netdev,sudo -s /home/ewindow/curses-ui/login.sh ewindow
ln -s "$PWD" /home/ewindow
chown -R ewindow:ewindow /home/ewindow/
echo -en "ewindow\newindow" | passwd ewindow

# Set up daemontools autorun:

apt install -y daemontools-run

ln -sf "$PWD"/configs/peervpn /etc/service/
ln -sf "$PWD"/configs/baresip /etc/service/
cp configs/etc/motd /etc/motd

