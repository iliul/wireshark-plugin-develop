#!/bin/bash
#
# $Id: win32-setup.sh 46936 2013-01-04 19:03:39Z gerald $

# 32-bit wrapper for win-setup.sh.

export DOWNLOAD_TAG="2013-01-04-1.8"
export WIRESHARK_TARGET_PLATFORM="win32"

WIN_SETUP=`echo $0 | sed -e s/win32/win/`

exec $WIN_SETUP $@
