#!/bin/bash
#
# $Id: win64-setup.sh 46936 2013-01-04 19:03:39Z gerald $

# 64-bit wrapper for win-setup.sh.

export DOWNLOAD_TAG="2013-01-04-1.8"
export WIRESHARK_TARGET_PLATFORM="win64"

WIN_SETUP=`echo $0 | sed -e s/win64/win/`

exec $WIN_SETUP $@
