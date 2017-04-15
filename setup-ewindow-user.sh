#!/bin/bash -e

# This script is intended for Raspbian
# It creates the "ewindow" user with auto-login

if [ $(whoami) == "root" ]; then
  echo Am Root
else
  echo Not Root, stopping...
  exit 23
fi

systemctl set-default multi-user.target
ln -sf /etc/systemd/system/autologin@.service /etc/systemd/system/getty.target.wants/getty@tty1.service
sed -i -e "s/--autologin pi/--autologin ewindow/g" /etc/systemd/system/autologin@.service

# Replace pi with ewindow user

useradd -G video,audio,netdev -s /home/ewindow/login.sh ewindow
git clone https://github.com/strfry/ewindow /home/ewindow
chown -R ewindow:ewindow /home/ewindow/

ln -s /home/ewindow/configs/peervpn /etc/service/
ln -s /home/ewindow/configs/baresip /etc/service/
cp etc/motd /etc/motd

apt-get install daemontools-run
