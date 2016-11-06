#!/bin/bash -ex

cd $(dirname $0) # Change working directory

dialog --menu menutext 20 100 10 \
	Config "Enter Configuration Menu" \
	Preview "Show Local Camera Stream" \
	Call "Holzwerkstatt" \
	Exit "" \
	2> dialog.result

case $(cat dialog.result) in
	Preview*)
		echo localhost > send/host
		svc -d -u send
		svc -u recv
		dialog --msgbox "Started Camera Preview..." 20 100
		svc -d recv
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
