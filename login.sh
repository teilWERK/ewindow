#!/bin/bash -ex

cd $(dirname $0) # Change working directory

if [ -n "$SSH_CLIENT" ]; then
  REMOTE_IP=$(echo $SSH_CLIENT | cut -f 1 -d " " )

  case "$2" in # Switch on arguments
    CALL)
      echo Incoming call from $REMOTE_IP
      # Asking for permission, to break the current call would happen here
      ssh $REMOTE_IP ACCEPT
      echo "Connection Accepted"
      echo $REMOTE_IP > send/host
      svc -du send recv
      #Doesnt work in SSH script dialog --msgbox "Starting call..." 20 100
      sleep 10
      svc -d send recv
      exit 0
      ;;
    ACCEPT)
      echo Call to $REMOTE_IP accepted
      echo $REMOTE_IP > send/host
      svc -d -u send recv
      exit 0
      ;;
    SEND)
      export HOST=$(cat hosts.exil)
      exec ./send.sh $HOST
      ;;
    *)
      echo Unknown Command, exiting
      exit 1
      ;;
  esac
else
  exec ./menu.sh
fi

