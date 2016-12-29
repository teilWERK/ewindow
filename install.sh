#!/bin/sh



# IF Raspbian
set -x
vcdbg version
set +x

# Baresip Dependency
#apt-get install -y libasound-dev libvpx-dev
#apt-get update
#apt-get install -y libssl-dev git

git clone https://github.com/eleKtronicwindow/baresip
git clone https://github.com/creytiv/re
git clone https://github.com/creytiv/rem


# For PeerVPN, doesnt exist on Raspbian Jessie
mkdir -p /usr/local/sbin




echo ########################
echo # PeerVPN Installation #
echo #
echo #
echo ########################


set -x

# Armin says this is shit:
#git submodule init
#git submodule update



git clone https://github.com/peervpn/peervpn peervpn/peervpn
  cd peervpn/peervpn && make && make install && cd ../../

#  mkdir -p /etc/service
#  rm -r /etc/service/peervpn
#  ln -s $PWD/peervpn/ /etc/service/peervpn
#  apt-get install -y daemontools-run
#set -ex
#rmdir /etc/service
#set +x
##mkdir /etc/service/??
# for i in etc/* do ln -s $i /etc
#ln -s /home/ewindow/etc/service /etc/





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

ldconfig

# User stuff
useradd ewindow -s /home/ewindow/login.sh -m -G audio,video
gpasswd -a ewindow audio


# Bootup/Run stuff
modprobe snd-pcm-oss
