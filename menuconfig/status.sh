#!/bin/bash

#import bashsimplecurses
source $(dirname $0)/bashsimplecurses/simple_curses.sh

network_check() {
    ping -c 1 -W 1 8.8.8.8 > /dev/null 2>&1
    echo $? > /dev/shm/ew-network

    #host ewindow.org

    ping6 -c 1 gateway.ewindow.org > /dev/null 2>&1
    echo $? > /dev/shm/ew-vpn
}

colorized_status() {
   wait
   if [[ $(cat $1) ]] ; then
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
   append "IP Address: $(hostname -I)"
   append "Internet Connection Status: $(colorized_status /dev/shm/ew-network)"
   append "VPN Connection Status: $(colorized_status /dev/shm/ew-vpn)"
   endwin
   
   window "DNS Configuration" "yellow" "50%"
   append_file "/etc/resolv.conf"
   endwin

   col_right 
   move_up
   window "Video Camera" "white" "50%"
   append "Video Devices Available: $(v4l2-ctl --list-devices)"
   endwin

   window "Audio" "foo" "50%"
   append "$(arecord -lq | grep -E ^[a-Z*])"
   append "$(aplay   -lq | grep -E ^[a-Z*])"
   endwin

}
#then ask the standard loop
main_loop
