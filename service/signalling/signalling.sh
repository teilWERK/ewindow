#!/bin/sh

SIGNAL_PORT=2222

cd /home/ewindow

LOCAL_IP="$(cat config/ip)"

read REMOTE_IP COMMAND ARGS

echo Command: $COMMAND
echo Args: $ARGS

function hangup() {
  read STATE IP < state

  if [ $STATE == "INCALL" ]; then
    echo HANGUP $LOCAL_IP | nc $IP $SIGNAL_PORT
    echo > state
    svc -d service/send service/recv
  else
    echo "hangup: Not in call?"
    exit 23
  fi
}

case $COMMAND in
  CALL)
    echo $LOCAL_IP ACCEPT
    echo INCALL $REMOTE_IP > state
    echo $REMOTE_IP > service/send/host
    svc -du service/send service/recv
    ;;
  HANGUP)
    hangup
    ;;
esac
