#!/bin/bash -e

cd $(dirname $0) # Change working directory

if [ ! -e configured ]
then
  exec sudo ./config.sh
  "$0"
else
  echo ewindow configured
  git stash
  git pull -r origin master
  if [ $? ] ; then
    echo Error?
    bash
  else
    git stash pop
  fi

  ./menu.sh
fi

#exec ./menu/main.sh

