#!/bin/bash

cd $(dirname $0) # Change working directory

if [ ! -e configured ]
then
  exec sudo ./config.sh
  "$0"
else
  echo $(hostname).ewindow.org configured, proceeding with update:
#  git stash
  git pull -r origin master
  if [ 0 != $? ] ; then
    echo Error?
    bash
  else
#    git stash pop
	echo Success!
  fi

  ./menu.sh
fi

git status
if [ $? ]; then
  echo git unclean??
  set -x
  bash
fi
#exec ./menu/main.sh

