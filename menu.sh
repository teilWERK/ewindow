#!/bin/bash -ex

cd $(dirname $0) # Change working directory

# Stop Services, in case the previous dialog exited in error while displaying
svc -d service/recv service/send

CHOICE=$(dialog --menu menutext 20 100 10 \
	Config "Enter Configuration Menu" \
	Preview "Show Local Camera Stream" \
	Call "Holzwerkstatt" \
	Exit "" \
	3>&1 1>&2 2>&3 )

case $CHOICE in
	Config)
		./config.sh
		;;
	Preview*)
		echo localhost > service/send/host
		svc -d -u service/send
		svc -u service/recv
		dialog --msgbox "Started Camera Preview..." 20 100
		svc -d service/recv service/send
		;;
	Call*)
		ssh 10.7.7.93 CALL
		svc -d recv send
		exit
		;;
	*)
		exit
		;;
esac
