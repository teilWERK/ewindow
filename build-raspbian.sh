#!/bin/sh -e

cd "$(dirname $0)"

# TODO: Allow for build without installation

if [ $(whoami) == "root" ]; then
else
  echo Not Root, stopping...
  exit 23
fi

mkdir -p src
cd src

# Install PeerVPN
git clone https://github.com/peervpn/peervpn
cd peervpn && make && make install && cd ..

# Baresip Dependencies, starting from raspbian lite
apt-get update
apt-get install -y git \
	libssl-dev libasound-dev libvpx-dev libopus-dev

git clone https://github.com/eleKtronicwindow/baresip
git clone https://github.com/creytiv/re
git clone https://github.com/creytiv/rem

cd re && make -j4 && make install && cd ..
cd rem && make -j4 && make install && cd ..

cd baresip && \
	make -j4 && make install

ldconfig
