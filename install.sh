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

# Baresip Dependency
apt-get install -y libasound-dev

# For PeerVPN, doesnt exist on Raspbian Jessie
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

#  mkdir -p /etc/service
#  rm -r /etc/service/peervpn
#  ln -s $PWD/peervpn/ /etc/service/peervpn
#  apt-get install -y daemontools-run



##################
#
# BareSIP
#
#
##################

cd re && make -j4 && make install && cd ..
cd rem && make -j4 && make install && cd ..

cd baresip && \
	make -j4 && make install


# User stuff
gpasswd -a ewindow audio


# Bootup/Run stuff
modprobe snd-pcm-oss
