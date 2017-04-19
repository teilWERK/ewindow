#!/bin/bash -e

cd "$(dirname $0)"

mkdir -p src
pushd src

# Install PeerVPN

git clone https://github.com/peervpn/peervpn
git clone https://github.com/eleKtronicwindow/baresip
git clone https://github.com/creytiv/re
git clone https://github.com/creytiv/rem

popd
