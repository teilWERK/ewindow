kpartx -av *jessie-lite.img
# sed remove init= from /boot/cmdline.txt
# checkout ewindow to /home/ewindow
# replace all occurences of pi with ewindow in /etc/group|shadow|passwd
# remove root password in /etc/shadow
# replace ewindow login shell with /home/ewindow/login.sh

On System:
passwd ewindow
Execute setup-ewindow.sh
Fix a lotta stuff, git pull/push
Shutdown


# Back on the PC:
fdisk /dev/sdc
p

dd if=/dev/sdc of=ewindow-v0.$X count=$PART2END
zip release.zip image.img
scp release.zip ewindow.org:download
