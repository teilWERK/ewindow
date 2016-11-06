#!/bin/sh

systemctl set-default multi-user.target
ln -sf /etc/systemd/system/autologin@.service /etc/systemd/system/getty.target.wants/getty@tty1.service

# Replace pi with ewindow user

useradd -G video,audio -s /home/ewindow/login.sh ewindow
sudo git clone https://github.com/strfry/ewindow /home/ewindow
sudo chown -R ewindow:ewindow /home/ewindow/


# sudo apt-get install stuff
# dialog (or use whiptail??)
# daemontools
# daemontools-run
