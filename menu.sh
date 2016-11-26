#!/bin/bash -ex

cd $(dirname $0) # Change working directory

# Stop Services, in case the previous dialog exited in error while displaying
#svc -d service/recv service/send

CHOICE=$(dialog --menu "$(hostname)" 20 100 10 \
	Info "Display debug information" \
	Preview "Show Local Camera Stream" \
	Call "Someone" \
	Shell "OS Shell" \
	Config "Enter Configuration Menu" \
	Update "git pull" \
	Exit "" \
	3>&1 1>&2 2>&3 )

case $CHOICE in
	Config)
		./menu.config.sh
		;;
	Preview*)
		echo localhost > service/send/host
		svc -d -u service/send service/recv
		dialog --msgbox "Started Camera Preview..." 20 100
		svc -d service/recv service/send
		;;
	Call*)
#		cat hosts.exil > service/send/host
		dialog --inputbox "Enter hostname of remote ewindow: " 20 40 "$(<service/send/host)" 2> service/send/host
		svc -du service/send service/recv
		ssh $(<service/send/host) CALL
		#RPC: dialog --msgbox "Calling..." 20 10
		svc -d service/send service/recv
		exit
		;;
	Update)
		git pull
		if [ ! $? ]; then echo "!!!git pull Failed!!! Check your internet connectivity!!!"; fi
		echo Press Enter to continue
		read
		;;
	Shell)
		bash
		;;
	Info)
		./info.sh
		;;
	*)
		exit
		;;
esac

