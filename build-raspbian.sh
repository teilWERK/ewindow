#!/bin/sh -e

cd "$(dirname $0)"

. fetch-src.sh
. install-deps.sh
. 

if [ $(whoami) == "root" ]; then
else
  echo Not Root, stopping...
  exit 23
fi

mkdir -p src
cd src

# Install PeerVPN
cd peervpn && make && make install && cd ..
git clone https://github.com/eleKtronicwindow/baresip
git clone https://github.com/creytiv/re
git clone https://github.com/creytiv/rem

cd re && make -j4 && make install && cd ..
cd rem && make -j4 && make install && cd ..

cd baresip && \
	make -j4 && make install

ldconfig
