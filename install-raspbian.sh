#!/bin/sh

set -e

# Baresip Dependencies, starting from raspbian lite
#apt-get update
apt-get install -y git
apt-get install -y libssl-dev libasound-dev libvpx-dev libopus-dev

git submodule update --init

cd peervpn && make && make install && cd ..
cd re && make -j4 && make install && cd ..
cd rem && make -j4 && make install && cd ..

cd baresip && \
	make -j4 && make install

ldconfig


