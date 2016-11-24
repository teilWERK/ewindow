Audio Findings
==============

lsusb
Bus 001 Device 014: ID 0d8c:0013 C-Media Electronics, Inc. 

"Good" USB Audio Input

Learned: Disable automatig gain control

compressor/amplifier chain through gstreamer:
gst-launch-1.0 -v alsasrc device=hw:2 ! audiodynamic mode=compressor threshold=0.3 ratio=7.0 ! audioamplify amplification=2 clipping-method=0 ! audioconvert ! audioconvert ! alsasink



Send/Recv Command
=================

Uncompressend send:
gst-launch-1.0 -v alsasrc device=plughw:1 ! "audio/x-raw,channels=1,rate=44100" ! udpsink host=$HOST port=7777

Uncompressed recv:
gst-launch-1.0 -vvv udpsrc address=:: port=7777 ! "audio/x-raw,format=S16LE,channels=1,rate=44100" ! alsasink
