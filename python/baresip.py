#!/usr/bin/env python

## CTypes libbaresip.so wrapper
from enum import Enum, IntEnum
#import ctypes
from ctypes import *

class UA_EVENT(Enum):
	UA_EVENT_REGISTERING 		= 0
	UA_EVENT_REGISTER_OK		= 1
	UA_EVENT_REGISTER_FAIL		= 2
	UA_EVENT_UNREGISTERING		= 3
	UA_EVENT_SHUTDOWN			= 4
	UA_EVENT_EXIT				= 5
	UA_EVENT_CALL_INCOMING		= 6
	UA_EVENT_CALL_RINGING		= 7
	UA_EVENT_CALL_PROGRESS		= 8
	UA_EVENT_CALL_ESTABLISHED	= 9
	UA_EVENT_CALL_CLOSED		= 10
	UA_EVENT_CALL_TRANSFER_FAILED	= 11
	UA_EVENT_CALL_DTMF_START	= 12
	UA_EVENT_CALL_DTMF_END		= 13
	UA_EVENT_MAX				= 24

class PRESENCE_STATUS(Enum):
	PRESENCE_UNKNOWN = 0
	PRESENCE_OPEN = 1
	PRESENCE_CLOSED = 2
	PRESENCE_BUSY = 3

class LE(Structure):
	_fields_ = [("prev", c_void_p),
				("next", c_void_p),
				("list", c_void_p),
				("data", c_void_p)]

class PL(Structure):
	_fields_ = [("p", c_char_p),
				("l", c_size_t)]

	def __str__(self):
		if not self.p: return "???"
		return self.p[:self.l]

class URI(Structure):
	_fields_ = [("scheme", PL),
				("user", PL),
				("password", PL),
				("host", PL),
				("af", c_int),
				("port", c_int16),
				("params", PL),
				("headers", PL)]

class SIP_ADDR(Structure):
	_fields_ = [("dname", PL),
				("auri", PL),
				("uri", URI),
				("params", PL)
	]

class TMR(Structure):
	_fields_ = [("le", LE),
				("tmr_h", c_void_p),
				("arg", c_void_p),
				("jfs", c_uint64)]

tmr_h = CFUNCTYPE(None, c_void_p)
signal_h = CFUNCTYPE(None, c_int)
ua_event_h = CFUNCTYPE(None, c_void_p, c_int, c_void_p, c_char_p, c_void_p)

def create_wrapper():
	bs = cdll.LoadLibrary('libbaresip.so')

	# libre

	bs.tmr_init.argtypes = [POINTER(TMR)]
	bs.tmr_start.argtypes = [POINTER(TMR), c_uint64, tmr_h, c_void_p]

	# libbaresip

	bs.conf_config.restype = c_void_p
	bs.uag_current.restype = c_void_p
	bs.baresip_contacts.restype = c_void_p

	bs.uag_event_register.argtypes = [c_void_p, c_void_p]
	bs.uag_event_register.restype = c_int

	bs.contact_list.restype = c_void_p
	bs.contact_list.argtypes = [c_void_p]

	bs.list_head.restype = POINTER(LE)
	bs.list_head.argtypes = [c_void_p]

	bs.baresip_init.argtypes = [c_void_p, c_bool]

	bs.contact_presence.argtypes = [c_void_p]
	bs.contact_presence.restype = PRESENCE_STATUS

	bs.contact_addr.argtypes = [c_void_p]
	bs.contact_addr.restype = POINTER(SIP_ADDR)

	bs.call_peername.argtypes = [c_void_p]
	bs.call_peername.restype = c_char_p
	
	bs.call_peeruri.argtypes = [c_void_p]
	bs.call_peeruri.restype = c_char_p
	
	bs.call_localuri.argtypes = [c_void_p]
	bs.call_localuri.restype = c_char_p
	
	bs.ua_aor.argtypes = [c_void_p]
	bs.ua_aor.restype = c_char_p

	bs.ua_presence_status_set.argtypes = [c_void_p, c_int]

	bs.ua_hold_answer.argtypes = [c_void_p, c_void_p]
	bs.ua_hangup.argtypes = [c_void_p, c_void_p, c_int16, c_char_p]

	bs.notifier_update_status.argtype = [c_void_p]

	bs.log_enable_debug.argtype = [c_bool]
	bs.log_enable_info.argtype = [c_bool]

	return bs


## Request Echo Cancellation for Pulseaudio:
import os
os.environ["PULSE_PROP"] = "filter.want=echo-cancel"

# Set X11 Display variable in case it's not set
if "DISPLAY" not in os.environ: os.environ["DISPLAY"] = ":0"

## START

bs = create_wrapper()
bs.libre_init()
bs.conf_path_set("/etc/ewindow")
bs.conf_configure()

# Parse command line arguments
import sys
from getopt import getopt

optlist, args = getopt(sys.argv[1:], "v")
if ('-v', '') in optlist:
	print "Enabling Debug Log"
	bs.log_enable_debug(True)
	bs.log_enable_info(True)
else:
	bs.log_enable_debug(False)
	bs.log_enable_info(False)
	

prefer_ipv6 = True
bs.baresip_init(bs.conf_config(), prefer_ipv6)
ret = bs.ua_init("EWindow", True, True, True, prefer_ipv6)
if ret:
	print "Error in ua_init(), exiting..."
	exit(ret)
	
bs.conf_modules()

# Load tty vumeter only in interactive console:
if sys.stdout.isatty():
	bs.module_load("vumeter")

def signal_handler(signal):
	print "Signal: ", signal
	# TODO: Proper cleanup
	#exit()
	if signal < 15: exit()

def list_contacts():
	cs = bs.baresip_contacts()
	cl = bs.contact_list(cs)

	h = bs.list_head(cl)

	ret = []

	while h:
		c = h.contents.data
		a = bs.contact_addr(c)
		#uri = "%s@%s" %(a.contents.uri.user, a.contents.uri.host)
		uri = str(a.contents.auri)
		
		presence = bs.contact_presence(c)
		#print a.contents.dname, uri, presence
		ret += [(a.contents.dname, uri, presence)]
		h = cast(h.contents.next, POINTER(LE))

	#for x, y, z in ret: print x, y, z

	return ret

class ConnectionManager(object):
	def __init__(self):
		self.current_connection = None

		self._py_callback = ua_event_h(self.uag_callback)
		# some ctypes magic to wrap self into void* arg
		self._py_arg = cast(pointer(py_object(self)), POINTER(py_object))
		
		bs.uag_event_register(self._py_callback, self._py_arg)

		set_presence_status(PRESENCE_STATUS.PRESENCE_OPEN)

	@staticmethod
	def uag_callback(ua, event, call, prm, arg):
		self = cast(arg, POINTER(py_object)).contents.value
		event = UA_EVENT(event)
		
		print "ConnectionManager: ", ua, event, call, prm

		if event == UA_EVENT.UA_EVENT_CALL_ESTABLISHED:
			print "Call established"
			set_presence_status(PRESENCE_STATUS.PRESENCE_BUSY)
			self.current_connection = ("foo", "bar")
		elif event == UA_EVENT.UA_EVENT_CALL_CLOSED:
			print "Call closed, reason: ", prm
			# Re-connect in case of rtp error
			if "rtp error" in prm:
				bs.ua_connect(bs.uag_current(), 0, 0, uri, 0, 1)
				pass # Reconnect
			else:
				# Accept it
				self.current_connection = None
			set_presence_status(PRESENCE_STATUS.PRESENCE_OPEN)
		elif event == UA_EVENT.UA_EVENT_CALL_INCOMING:
			us = bs.ua_aor(bs.uag_current())
			them = bs.call_peeruri(call)
			print "Incoming call handler: Us: {} Them: {}".format(us, them)
			if self.current_connection:
				if (them == self.current_connection[1]):
					if (us < them):
						self.current_connection = (them, them)
						bs.ua_hold_answer(ua, call)
						print "Accepting call from our target"
						# TODO: Hangup our outgoing call
					else:
						bs.ua_hangup(ua, call, 0, "Don't call us we call you")
						print "Rejecting call from our target, we wait for answer"
				else:
					print "Rejecting call from", bs.call_peeruri(call)
					bs.ua_hangup(ua, call, 0, "We want to connect to someone else")
			else:
				bs.ua_hold_answer(ua, call)
		else :
			print "Unknown Event!!!", event

	def manage(self):
		#print "ConnMan.manage"
		if self.current_connection:
			return
		# Poll connections

		candidates = []

		for dname, uri, status in list_contacts():
			if status == PRESENCE_STATUS.PRESENCE_OPEN:
				print "Found connection candidate: ", dname
				candidates += [(dname, uri)]

		if not len(candidates): return

		# Select random candidate from list
		import random
		idx = random.randint(0, len(candidates) - 1)
		print "candidates", candidates, "idx", idx
		dname, uri = candidates[idx]
		print "Connecting to ", uri, "..."
		self.current_connection = uri
		bs.ua_connect(bs.uag_current(), 0, 0, uri, 0, 1)

def set_presence_status(status):
	if isinstance(status, PRESENCE_STATUS):
		status = status.value
	bs.ua_presence_status_set(bs.uag_current(), status)
	bs.notifier_update_status(bs.uag_current())


import thread
import time

timer = TMR()
bs.tmr_init(pointer(timer))
timerh = None

connman = ConnectionManager()

def timer_callback(arg):
	bs.tmr_start(pointer(timer), 1000, timerh, 0x1337)
	connman.manage()

timerh = tmr_h(timer_callback)
timer_callback(0)

signalh = signal_h(signal_handler)
bs.re_main(signalh)

#th = thread.start_new_thread (bs.re_main, (signal_h(signal_handler),))
#while True:
#	time.sleep(1)
#	connman.manage()
	#for d, u, s in list_contacts():
	#	print d, s
