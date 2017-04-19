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

echo Setting up ewindow user for autologin into curses-ui

systemctl set-default multi-user.target
ln -sf /etc/systemd/system/autologin@.service /etc/systemd/system/getty.target.wants/getty@tty1.service
sed -i -e "s/--autologin pi/--autologin ewindow/g" /etc/systemd/system/autologin@.service

useradd -G video,audio,netdev,sudo -s /home/ewindow/login.sh ewindow
ln -s "$PWD"/curses-ui /home/ewindow
chown -R ewindow:ewindow /home/ewindow/
echo Setting ewindow user password to 'ewindow'
echo -en "ewindow\newindow" | passwd ewindow 2>/dev/null

# Set up daemontools autorun:

ln -sf "$PWD"/configs/peervpn /etc/service/
ln -sf "$PWD"/configs/baresip /etc/service/
cp configs/etc/motd /etc/motd
