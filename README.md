http://ewindow.org


Installation
============

    git clone https://github.com/strfry/ewindow /opt/ewindow
    cd /opt/ewindow
    ./fetch-src.h # Clone sub-repos
    ./install-deps.h # Debian
    cd src/re && make && make install &6 cd ../../
    cd src/rem && make && make install &6 cd ../../
    cd src/baresip && make && make install &6 cd ../../
    ln -s /opt/ewindow/configs/baresip ~/.baresip
    
    
## Test the audio setup
baresip -e /auloop

## Test the video setup
baresip -e /vidloop

## Reasons we chose baraesip

- SIP Video Soft-Phone implementation based baresip/libre sip stack
- Audio codecs: Opus, PCM/8000, Speex
- Video codec VP8/VP9 (PC), H.264 (GStreamer/x264) [Pending RPi HW Implementation]
- BSD-licensed codebase, lean, modular C & shell codebase
- Supports Raspberry Pi hardware-accelerated video output (OpenMAX)
- dialog-based User Interface

Backlog / Challenges
====================

- Fix up WebRTC <> baresip interaction -> [WebWindow]
* Integrate H264 decoder in baresip/omx module
* Security: Generate PeerVPN config with PSK from end-user dialog
* Real-Time Accoustic Echo Cancellation (integrate libwebrtc-audio-processing ?)
* Build the software on RaspBSD

Contact
=======

Jonathan Sieber - mail@strfry.org
