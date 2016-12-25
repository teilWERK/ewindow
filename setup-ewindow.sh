#!/bin/bash

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

apt-get update
apt-get install -y \
	git \
	dialog \
	daemontools-run \

ln -s /home/ewindow/peervpn/ /etc/service/
cp etc/motd /etc/motd


# Things to do as user
# cd /home/ewindow
# ln -s etc/baresip .baresip
