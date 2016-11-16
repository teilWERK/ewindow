Audio Findings
==============

lsusb
Bus 001 Device 014: ID 0d8c:0013 C-Media Electronics, Inc. 

"Good" USB Audio Input

Learned: Disable automatig gain control

compressor/amplifier chain through gstreamer:
gst-launch-1.0 -v alsasrc device=hw:2 ! audiodynamic mode=compressor threshold=0.3 ratio=7.0 ! audioamplify amplification=2 clipping-method=0 ! audioconvert ! audioconvert ! alsasink
