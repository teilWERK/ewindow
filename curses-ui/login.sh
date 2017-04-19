#!/bin/bash -ex

cd $(dirname $0) # Change working directory

if [ ! -e configured ]
then
  exec sudo ./config.sh
  "$0"
else
  echo ewindow configured
  ./menu.sh
fi

#exec ./menu/main.sh

