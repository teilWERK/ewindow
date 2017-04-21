#!/bin/bash

cd "$(dirname $0)"

if [ ! -e configured ] ;
then
  sudo ./config.sh
  "$0"
  #echo Window Configuration Finished. Press ENTER to reboot
fi

  echo $(hostname).ewindow.org configured, proceeding with update:
  git pull -r origin master
  if [ 0 != $? ] ; then
# should be a while loop?
    echo Something went wrong while pulling updates
    echo Please clean up your local git repository
    bash
  else
	echo Success!
  fi

  . ./menu.sh

git status
if [ $? ]; then
  echo git unclean??
  set -x
  bash
fi
#exec ./menu/main.sh

