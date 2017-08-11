## CTypes libbaresip.so wrapper
from enum import Enum, IntEnum
#import ctypes
from ctypes import *

bs = cdll.LoadLibrary('libbaresip.so')

signal_h = CFUNCTYPE(None, c_int)
#typedef void (ua_event_h)(struct ua *ua, enum ua_event ev,
#			  struct call *call, const char *prm, void *arg);
ua_event_h = CFUNCTYPE(None, c_void_p, c_int, c_void_p, c_char_p, c_void_p)

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


bs.conf_config.restype = c_void_p
bs.uag_current.restype = c_void_p
bs.baresip_contacts.restype = c_void_p

class LE(Structure):
	_fields_ = [("prev", c_void_p),
				("next", c_void_p),
				("list", c_void_p),
				("data", c_void_p)]

class PL(Structure):
	_fields_ = [("p", c_char_p),
				("l", c_size_t)]

	def __str__(self):
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


bs.contact_list.restype = c_void_p
bs.contact_list.argtypes = [c_void_p]

bs.list_head.restype = POINTER(LE)
bs.list_head.argtypes = [c_void_p]

bs.baresip_init.argtypes = [c_void_p, c_bool]

bs.contact_presence.argtypes = [c_void_p]
bs.contact_presence.restype = PRESENCE_STATUS

bs.contact_addr.argtypes = [c_void_p]
bs.contact_addr.restype = POINTER(SIP_ADDR)


## START

bs.libre_init()
bs.conf_path_set("/home/strfry/.ewindow")
bs.conf_configure()

prefer_ipv6 = True
bs.baresip_init(bs.conf_config(), prefer_ipv6)
bs.ua_init("EWindow", True, True, True, prefer_ipv6)
bs.conf_modules()

def event_handler(ua, event, call, prm, arg):
	print "UAG EVENT!!!"
	event = UA_EVENT(event)
	print hex(ua), event, call, prm, arg

def signal_handler(signal):
	print "Signal: ", signal
	# TODO: Proper cleanup
	#exit()
	if signal < 15: exit()

evh = ua_event_h(event_handler)
bs.uag_event_register(evh, 0x1337)

def list_contacts():
	cs = bs.baresip_contacts()
	cl = bs.contact_list(cs)

	h = bs.list_head(cl)

	while h:
		c = h.contents.data
		a = bs.contact_addr(c)
		uri = "%s@%s" %(a.contents.uri.user, a.contents.uri.host)
		presence = bs.contact_presence(c)
		print a.contents.dname, uri, presence
		
		h = cast(h.contents.next, POINTER(LE))

class AutoconnectManager(object):
	def __init__(self):
		current_connection = None

	def uag_callback(self, foo):
		pass

	def manage(self):
		if current_connection:
			pass
		# Poll connections

#call_uri = "lorenza@debianwindow.ewindow.org"
call_uri = "pi@[fde1:c0fe::7]"
bs.ua_connect(bs.uag_current(), 0, "sip:blablarg", call_uri, 0, 1)

import thread
import time

th = thread.start_new_thread (bs.re_main, (signal_h(signal_handler),))
while True:
	time.sleep(1)
	list_contacts()
#bs.re_main(0)
