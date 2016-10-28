#!/bin/sh

export LD_LIBRARY_PATH=/opt/vc/lib
export GST_PLUGIN_PATH=/usr/local/lib/gstreamer-1.0

export REMOTE=192.168.0.17
export AUDIOPORT=4444
export VIDEOPORT=5555

killall gst-launch-1.0

/usr/bin/gst-launch-1.0 -vvv \
	v4l2src  ! "video/x-raw, width=640, height=480" ! queue ! omxh264enc ! rtph264pay ! \
		udpsink host=$REMOTE port=$VIDEOPORT \
	&

/usr/bin/gst-launch-1.0 -vvv \
    udpsrc address=0.0.0.0 port=$VIDEOPORT !  'application/x-rtp,payload=96,encoding-name=H264'! rtph264depay ! \
	h264parse ! omxh264dec !  decodebin ! \
	glimagesink \
	&

#/usr/bin/gst-launch-1.0 -vvv \
#    alsasrc  ! audiodynamic characteristics=soft-knee mode=expander  threshold=0.01  ratio=4.0  ! \
#	opusenc complexity=0 ! rtpopuspay !  \
#	udpsink  host=$REMOTE  port=$AUDIOPORT \
#	&

#/usr/bin/gst-launch-1.0 -vvv \
#    udpsrc address=0.0.0.0 port=4444 caps="application/x-rtp" ! rtpopusdepay ! opusdec ! alsasink


/usr/bin/gst-launch-1.0 -vvv \
    udpsrc address=0.0.0.0 port=4444 caps="application/x-rtp" ! rtppcmudepay ! mulawdec ! alsasink \
        &

/usr/bin/gst-launch-1.0 -vvv \
    alsasrc ! audiodynamic characteristics=soft-knee mode=expander  threshold=0.01 ratio=4.0  ! \
        mulawenc ! rtppcmupay ! udpsink  host=$REMOTE port=$AUDIOPORT
