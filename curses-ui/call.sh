#!/bin/bash -ex

cd $(dirname $0) # Change working directory

# List of known nodes:

CHOICE=$(dialog --menu "$(hostname)" 20 100 10 \
	exit.ewindow.org "Strfry's exit node" \
	twBox.ewindow.org "teilWERK Box" \
	c3d2.ewindow.org "Hackspace MiniWindow" \
	testvm.ewindow.org "Build Virtual Machine" \
	dresden.ewindow.org "RosenWERK Window"	\
	Exit "" \
	3>&1 1>&2 2>&3 )
#	zockers.ewindow.org	"Call Zockers E-window" \


case $CHOICE in
	Exit)
		;;
	Type)
		dialog --msgbox "Sorry. Not implemented yet..." 20 100
		;;
	*)
		clear
		#baresip -6 -v -e d"$CHOICE"
		echo "dewindow@$CHOICE" | nc -q -1 localhost 5555 >&2 &
		dialog --msgbox "Press Enter to abort calll..." 20 100
		sudo killall baresip
		sleep 2 && ./menu.sh
		;;
esac

#exec main.sh
