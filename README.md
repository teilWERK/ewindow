Elektronic Window v0.1
======================

Raspberry Pi-based Video Communication Platform

#Architecture

* daemontools scripts in /service
* login.sh is login shell for ewindow user
* Signalling done through SSH connection
* Curses/dialog based menu as autostart
* 

# Installation

Steps in setup-ewindow.sh:
* Create ewindow user, set login.sh as shell
* Install dependencies: daemontools-run, [...]
* Link ewindow.startup?? to /etc/service/


