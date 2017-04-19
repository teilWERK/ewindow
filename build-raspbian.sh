#!/bin/sh -e

cd "$(dirname $0)"

set -e # TODO: Properly check for root?

git submodule update --init

# Baresip Dependencies, starting from raspbian lite
apt-get update
apt-get install -y git \
	libssl-dev libasound-dev libvpx-dev libopus-dev

git clone https://github.com/eleKtronicwindow/baresip
git clone https://github.com/creytiv/re
git clone https://github.com/creytiv/rem

cd peervpn && make && make install && cd ..
cd re && make -j4 && make install && cd ..
cd rem && make -j4 && make install && cd ..

cd baresip && \
	make -j4 && make install

ldconfig
