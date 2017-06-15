#!/bin/bash

cd "$(dirname $0)"

mkdir -p src
pushd src

# Install PeerVPN

git clone https://github.com/peervpn/peervpn
git clone https://github.com/eleKtronicwindow/baresip
git clone https://github.com/creytiv/re
git clone https://github.com/creytiv/rem

cd peervpn; make -j4 && sudo make install; cd ..
cd re; make -j4 && sudo make install; cd ..
cd rem; make -j4 && sudo make install; cd ..
cd baresip; make -j4 && sudo make install; cd ..

popd
