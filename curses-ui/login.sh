#!/bin/bash -ex

cd $(dirname $0) # Change working directory

if [ ! -e configured ]
then
  exec sudo ./config.sh
  "$0"
else
  echo ewindow configured
  git pull -r origin master
  if [ $? ] ; then
    echo -en Error?
    read
  fi

  ./menu.sh
fi

#exec ./menu/main.sh

