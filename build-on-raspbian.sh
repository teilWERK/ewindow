#!/bin/bash

cd "$(dirname $0)"

if [ $(whoami) != "root" ]; then
  echo This script needs to run as root to install stuff!!!
  exit 23
fi

. ./fetch-src.sh
. ./install-deps.sh

cd src # TODO: Replace this with recursive Makefile...

# Install PeerVPN
cd peervpn && make && make install && cd ..
cd re && make -j4 && make install && cd ..
cd rem && make -j4 && make install && cd ..
cd baresip && make -j4 && make install && cd ..

ldconfig
