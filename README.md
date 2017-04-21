# ewindow
VideoChat Appliance for the Raspberry Pi

# Features

- SIP Video Soft-Phone implementation based baresip/libre sip stack
- Audio codecs: Opus, PCM/8000, Speex
- Video codec VP8/VP9 (PC), H.264 (Pending RPi HW Implementation)
- BSD-licensed codebase, lean, modular C & shell codebase
- Supports Raspberry Pi hardware-accelerated video output (OpenMAX)
- dialog-based User Interface


Download  
========

Preview Alpha 0.2 from 20th April 2017 can be downloaded here:
http://ewindow.org/ewindow-v0.2-20Apr17.zip

ATTENTION: This version is not secure yet. The access keys are stored on Github. It might potentially compromise your network!
Regard it as experimental.
Help in making the VPN more secure and functional would be super-welcome.
Please contact us if you want to help building a Continous Integration environment. 
See [teilWERK/Image] for instructions, how this image was built from Raspbian Lite on a QEMU-ARM System.


Backlog / Challenges
====================

- Fix up WebRTC <> baresip interaction -> [WebWindow]
* Using the native Raspberry Pi VideoCore4 HW Acceleration with OpenMAX
* Write a raspicam camera driver
* Integrate H264 decoder in omx module
* Security:  Generate PeerVPN config with PSK from end-user dialog
* Real-Time Accoustic Echo Cancellation (integrate libwebrtc-audio-processing ?)
* Build the software on RaspBSD
* IDEA: Use a sip phone with ewindow as video-adding proxy
* Fix USB crashed with Speakerphones
* Hardware design of Raspi I2S Speakerphone Hat?


Contact
=======

Jonathan Sieber - mail@strfry.org
