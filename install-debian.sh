#!/bin/sh

# Baresip Dependency
apt-get update
apt-get install -y libasound-dev libvpx-dev libopus-dev
apt-get install -y libssl-dev git


set -x

cd peervpn && make && make install && cd ..
cd re && make -j4 && make install && cd ..
cd rem && make -j4 && make install && cd ..

cd baresip && \
	make -j4 && make install

ldconfig


