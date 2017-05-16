http://ewindow.org


Installation
============

## Prerequisites
- PC with Linux installed (tested with Debian/Devuan Jessie)
- Webcam
- USB Speakerphone
- Internet connection


## Build the Software

    git clone https://github.com/strfry/ewindow /opt/ewindow
    cd /opt/ewindow
    ./fetch-src.sh # Clone sub-repos
    ./install-deps.sh # Debian
    cd src/re && make && make install &6 cd ../../
    cd src/rem && make && make install &6 cd ../../
    cd src/baresip && make && make install &6 cd ../../
    cd src/peervpn && make && make install && cd ../../
    
## Setup the VPN:

PeerVPN can be manually launched with '''peervpn $EWIN_PATH/configs/peervpn/peervpn-ewindow.conf'''

If you ran install-deps.sh installed daemontools-run in the previous step,
you can make automagically start PeerVPN by linking it into the service directory:

    ln -s /opt/ewindow/configs/peervpn /etc/service/peervpn
    

You can check connectivity to other peers with IPv6 broadcast ping:

    ping6 ff02::1%tap0

There should be at least one DUP response (from the ewindow.org server)

Make sure to run a DHCP client on the tap interface, to receive a V4 Address.
The IPv6 address is automatically derived from eth0's MAC address,
by the run scripts found in configs/peervpn/

## Set up baresip

Before starting up baresip, I recommend to link the config from the repo in your home directory:

    ln -s /opt/ewindow/configs/baresip ~/.baresip

The main configuration file of baresip can be found in .baresip/config

### Test the audio setup

    baresip -e /auloop

You should hear your own echo (which should stop after a moment, if some kind of echo cancellation is in place )

If you don't have a Speakerphone with builtin Echo Cancellation, and have a running Pulseaudio setup, you can use it's AEC feature:

     PULSE_PROP="filter.want=echo-cancel" baresip -e /auloop
     
If you run into problems with the ALSA driver, you can try the OSS emulation:

    sudo modprobe snd-pcm-oss

Then add to '''.baresip/config''' :
	
	module oss.so
	audio_player	oss,/dev/dsp
	audio_source	oss,/dev/dsp
	audio_alert		none # Avoid blocking audio device with ringtones


Beware that this code tests the audio device at 8000 Hz sample rate,
which might lead to situations, where this tests fails, but the actual call
at 48KHz succeeds.

### Test the video setup

This tests the video input and output modules

    baresip -e /vidloop
    
To test with a video codec in the loop, run:
    
    baresip -e /vidloop\ h264
    
### Test call to the localhost

Since baresip always only binds to the IP of the configured interface,
you need to find that first. Then run:

    baresip -e dewindow@<TAP0_V4_ADDR>

In this setup, baresip tries to access the local audio and video devices twice,
once as a caller, and as a callee. Allthough you should be able to get a 
local audio and video feedback.

### Make a test call to the ewindow.org bridge:

On ewindow.org runs a test instance of baresip, configured with
audio and video bridge modules (basically like the previous echo tests, but this time with added round-trip-time latency)

    baresip -e dewindow@10.23.42.1



Backlog / Challenges
====================

* Fix remaining OpenMAX bug
* Integrate H264 decoder in baresip/omx module
* Security: Generate PeerVPN config with PSK from end-user dialog
* Real-Time Accoustic Echo Cancellation (integrate libwebrtc-audio-processing ?)

## Why we chose baresip

- Lightweight C SIP Video-Softphone implementation based on libre stack
- Audio codecs: Opus, PCM/8000, Speex
- Video codec VP8/VP9 (PC), H.264 (GStreamer/x264) [Pending RPi HW Implementation]
- Supports zrtp 
- BSD-licensed codebase, lean, modular C & shell codebase
- Supports Raspberry Pi hardware-accelerated video output (OpenMAX)

Contact
=======

Jonathan Sieber - mail@strfry.org
