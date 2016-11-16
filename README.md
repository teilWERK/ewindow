Elektronic Window v0.1
======================

Raspberry Pi-based Video Communication Platform

#DOWNLOAD LINK

Get the Image at http://ewindow.org/download/ewindow-v0.1.zip
Unzip the .zip, you get the .img File

[Proceed after the directions of https://www.raspberrypi.org/documentation/installation/installing-images/ ]

Easy Alternative: Get https://etcher.io/

* Insert SD Card
* Start Etcher
* Select Image (.img File)
* Make sure SD Card is selected
 * Flash!

Passwort: ewindow/ewindow

# Installation / First Bootup

* Boot the Pi with the flashed SD card
* A Dialog should appear, asking for hostname: Enter xxx.ewindow.org
* v0.1 Image has a bug: Enter OS Shell to fix it:
** su
** chown -R ewindow:ewindow .
** exit
* Select Preview and test camera view
* Call someone, like fablab-munich-ewindow.org
** Enter the password of remote ewindow user. (Default: ewindow)
** Now wait for connection, press enter to hang up


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


