#!/bin/bash -e

# This script is intended for Raspbian
# It creates the "ewindow" user with auto-login

cd "$(dirname $0)"

EPATH=/opt/ewindow

if [ $(whoami) == "root" ]; then
  echo Am Root
else
  echo Not Root, stopping...
  exit 23
fi

echo Setting up ewindow user for autologin into curses-ui

systemctl set-default multi-user.target
ln -sf /etc/systemd/system/autologin@.service /etc/systemd/system/getty.target.wants/getty@tty1.service
sed -i -e "s/--autologin pi/--autologin ewindow/g" /etc/systemd/system/autologin@.service

useradd -G video,audio,netdev,sudo,pi -s $EPATH/curses-ui/login.sh -m ewindow

# Fix up permissions...
chown -R ewindow:ewindow $EPATH
chmod -R g+rwX $EPATH

# Add pi user to ewindow group, for editing convenience...
gpasswd -a pi ewindow

echo Setting ewindow user password to 'ewindow'
echo -en "ewindow\newindow" | passwd ewindow 2>&1 > /dev/null
ewindow ALL=(ALL) NOPASSWD: ALL >> /etc/sudoers.d/010_pi-nopasswd

echo Set up daemontools autorun:
mkdir -p /etc/service
set -x
ln -sf "$PWD"/configs/peervpn /etc/service/
ln -sf "$PWD"/configs/baresip /etc/service/


cp configs/etc/motd /etc/motd
cp configs/etc/asound.conf /etc/asound.conf
