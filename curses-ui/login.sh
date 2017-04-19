#!/bin/bash

cd $(dirname $0) # Change working directory

if [ ! -e configured ]
then
  exec sudo ./config.sh
  "$0"
else
  echo $(hostname).ewindow.org configured, proceeding with update:
  git stash
  git pull -r origin master
  if [ ! $? ] ; then
    echo Error?
    bash
  else
    git stash pop
  fi

  ./menu.sh
fi

#exec ./menu/main.sh

