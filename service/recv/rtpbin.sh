#!/bin/sh

DEST=$(<../send/host)
DEST=::1
# this adjusts the latency in the receiver
LATENCY=200

# the caps of the sender RTP stream. This is usually negotiated out of band with
# SDP or RTSP. normally these caps will also include SPS and PPS but we don't
# have a mechanism to get this from the sender with a -launch line.
VIDEO_CAPS="application/x-rtp,media=(string)video,clock-rate=(int)90000,encoding-name=(string)H264"
AUDIO_CAPS="application/x-rtp,media=(string)audio,clock-rate=(int)8000,encoding-name=(string)PCMA"

VIDEO_DEC="rtph264depay ! decodebin"
AUDIO_DEC="rtppcmadepay ! alawdec"

VIDEO_SINK="videoconvert ! glimagesink"
AUDIO_SINK="audioconvert ! audioresample ! alsasink"

gst-launch-1.0 -v rtpbin name=rtpbin latency=$LATENCY                                  \
     udpsrc caps=$VIDEO_CAPS port=5000 ! rtpbin.recv_rtp_sink_0                       \
       rtpbin. ! $VIDEO_DEC ! $VIDEO_SINK                                             \
     udpsrc port=5001 ! rtpbin.recv_rtcp_sink_0                                       \
         rtpbin.send_rtcp_src_0 ! udpsink port=5005 host=$DEST sync=false async=false \
#     udpsrc caps=$AUDIO_CAPS port=5002 ! rtpbin.recv_rtp_sink_1                       \
#       rtpbin. ! $AUDIO_DEC ! $AUDIO_SINK                                             \
#     udpsrc port=5003 ! rtpbin.recv_rtcp_sink_1                                       \
#         rtpbin.send_rtcp_src_1 ! udpsink port=5007 host=$DEST sync=false async=false
