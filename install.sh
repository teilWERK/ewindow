#!/bin/sh

#set -ex
#rmdir /etc/service

#set +x
##mkdir /etc/service/??
# for i in etc/* do ln -s $i /etc
#ln -s /home/ewindow/etc/service /etc/



# IF Raspbian
set -ex
vcdbg version
set +ex

#apt-get update
#apt-get install -y libssl-dev git

mkdir -p /usr/local/sbin




echo ########################
echo # PeerVPN Installation #
echo #
echo #
echo ########################


set -x

git submodule init
git submodule update


  cd peervpn/peervpn && make && make install && cd ../../

  mkdir -p /etc/service
  rm -r /etc/service/peervpn
  ln -s $PWD/peervpn/ /etc/service/peervpn
  apt-get install -y daemontools-run
