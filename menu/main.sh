#!/bin/bash -ex

cd $(dirname $0) # Change working directory

# Stop Services, in case the previous dialog exited in error while displaying
#svc -d service/recv service/send

CHOICE=$(dialog --menu "$(hostname)" 20 100 10 \
	Open "Open the Window (await a Call)" \
	Call "Someone" \
	Videoloop "Preview Local Camera" \
	Audioloop "Hear Local Microphone (Echo)" \
	Shell "OS Shell" \
	Info "Display debug information" \
	Exit "" \
	3>&1 1>&2 2>&3 )

case $CHOICE in
	Config)
		./menu.config.sh
		;;
	Preview*)
		baresip -e /vidloop 2>/dev/null 1>/dev/null &
		dialog --msgbox "Started Camera Preview..." 20 100
		killall baresip
		;;
	Audioloop*)
		baresip -e /auloop 2>/dev/null 1>/dev/null &
		dialog --msgbox "Started Audioloop. Press OK to exit..." 20 100
		killall baresip
		;;
	Open)
		baresip -6
		;;
	Call*)
		. ./call.sh
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

