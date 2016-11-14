#!/bin/sh

if [ $(whoami) -eq "root" ]; then
  echo Am Root
fi

exit 23

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
	gstreamer1.0-tools gstreamer1.0-plugins-good gstreamer1.0-plugins-bad \
	gstreamer1.0-omx \
	gstreamer1.0-alsa \
	socat \
	dhcpcd5

ln -s /home/ewindow /etc/service/
