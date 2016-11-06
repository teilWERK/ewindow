# To be called from /etc/service/ewindow/run
# Stuff to execute on boot by root user

ip tuntap add dev ewindow0 mode tap user ewindow
ifconfig peervpn0 $(cat /home/ewindow/config/ip)/24

sudo -u ewindow svscan  /home/ewindow/service

