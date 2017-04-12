#!/bin/sh

git submodule update

set -x

cd peervpn && make && make install && cd ..
cd re && make -j4 && make install && cd ..
cd rem && make -j4 && make install && cd ..

cd baresip && \
	make -j4 && make install

ldconfig


