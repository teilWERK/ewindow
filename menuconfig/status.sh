#!/bin/bash

export TERM=${1:-linux}
export LANG=${1:-C.UTF-8}

#import bashsimplecurses
source $(dirname $0)/bashsimplecurses/simple_curses.sh

network_check() {
    ping -c 1 -W 1 8.8.8.8 > /dev/null 2>&1
    echo $? > /dev/shm/ew-network

    #host ewindow.org

    ping6 -c 1 gateway.ewindow.org > /dev/null 2>&1
    echo $? > /dev/shm/ew-vpn
}

network_addrs() {
    echo $(ip addr|grep 'scope global'|grep -E -o 'inet6? [^/]*'|cut '-d ' -f2)
}

colorized_status() {
   wait
   
   #echo $(<$1)
   if [ "$(cat $1)" = 0 ] ; then
      echo -e "\e[32monline";
   else
      echo -e "\e[31moffline";
   fi
}

#create the main function
main(){
   #read a
   #echo $a
   
   network_check &

   window "EWindow Status" "green" "50%"
   append "Hostname: $(hostname)"
   append "IP Address: $(network_addrs)"
   append "Internet Connection Status: $(colorized_status /dev/shm/ew-network)"
   append "VPN Connection Status: $(colorized_status /dev/shm/ew-vpn)"
   endwin
   
   window "DNS Configuration" "yellow" "50%"
   append_file "/etc/resolv.conf"
   endwin

   col_right 
   move_up
   window "Video Camera" "red" "50%"
   append "Video Devices Available: $(v4l2-ctl --list-devices 2> /dev/null)"
   endwin

   window "Audio" "blue" "50%"
   append "$(arecord -lq | grep -E ^[a-zA-Z*])"
   append "$(aplay   -lq | grep -E ^[a-zA-Z*])"
   endwin

   # Check for keypress
   if read -t 0.01 -n 1; then
      exit
   fi
}
#then ask the standard loop
main_loop
