#!/bin/bash -e

cd "$(dirname $0)"

mkdir -p src

# Install PeerVPN

git clone https://github.com/strfry/ewindow
git clone https://github.com/peervpn/peervpn
git clone https://github.com/eleKtronicwindow/baresip
git clone https://github.com/creytiv/re
git clone https://github.com/creytiv/rem

# Move source inside rootfs
