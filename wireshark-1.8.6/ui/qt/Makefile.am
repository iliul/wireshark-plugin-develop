# Makefile.am
# Automake file for the Qt interface routines for Wireshark
#
# $Id: Makefile.am 43275 2012-06-15 18:18:07Z gerald $
#
# Wireshark - Network traffic analyzer
# By Gerald Combs <gerald@wireshark.org>
# Copyright 1998 Gerald Combs
#
# This program is free software; you can redistribute it and/or
# modify it under the terms of the GNU General Public License
# as published by the Free Software Foundation; either version 2
# of the License, or (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

include Makefile.common
include ../../Makefile.am.inc

if HAVE_WARNINGS_AS_ERRORS
AM_CLEAN_CFLAGS = -Werror
endif

noinst_LIBRARIES = libqtui.a

CLEANFILES = \
	libqtui.a		\
	*~

DISTCLEANFILES = \
	$(GENERATED_NODIST_FILES)

MAINTAINERCLEANFILES = \
	$(GENERATED_FILES)		\
	$(GENERATED_NODIST_FILES)	\
	Makefile.in

RUNLEX=$(top_srcdir)/tools/runlex.sh

libqtui_a_SOURCES = \
	$(WIRESHARK_QT_SRC) \
	$(WIRESHARK_TAP_SRC) \
	$(GENERATED_C_FILES) \
	$(GENERATED_CPP_FILES) \
	$(noinst_HEADERS) \
	$(GENERATED_HEADER_FILES)

nodist_libqtui_a_SOURCES = \
	$(GENERATED_NODIST_C_FILES) \
	$(GENERATED_NODIST_CPP_FILES) \
	$(GENERATED_NODIST_HEADER_FILES)

libqtui_a_CFLAGS = $(AM_CLEAN_CFLAGS)

libqtui_a_DEPENDENCIES =

# Common headers
AM_CPPFLAGS = -I$(top_srcdir) -I$(top_srcdir)/wiretap $(LIBGCRYPT_CFLAGS) $(LIBGNUTLS_CFLAGS) $(PORTAUDIO_INCLUDES)

#
# For building .moc.cpp files from .h files by running moc
# and building .rcc.cpp files from .qrc files by running rcc
#
SUFFIXES = .moc.cpp .qrc .rcc.cpp

.h.moc.cpp:
	moc -o $@ $<

.qrc.rcc.cpp:
	rcc -name `basename $< .qrc` -o $@ $<

main_window.h: ui_main_window.h

ui_main_window.h: main_window.ui
	uic $< -o $@

doxygen:
if HAVE_DOXYGEN
	$(DOXYGEN) doxygen.cfg
endif		# HAVE_DOXYGEN

checkapi: checkapi-base checkapi-todo

checkapi-base:
	$(PERL) ../tools/checkAPIs.pl -g deprecated-gtk -build \
	$(WIRESHARK_GTK_SRC) \
	$(WIRESHARK_TAP_SRC) \
	capture_if_details_dlg_win32.c

checkapi-todo:
	$(PERL) ../tools/checkAPIs.pl -M -g deprecated-gtk-todo -build \
	$(WIRESHARK_GTK_SRC) \
	$(WIRESHARK_TAP_SRC) \
	capture_if_details_dlg_win32.c

expert_indicators.h:
	echo "/* This file was automatically generated. DO NOT EDIT. */" > $@
	echo >> $@
	for elevel in chat error none note warn ; do \
		gdk-pixbuf-csource --raw --name=expert_$${elevel}_pb_data ../../image/expert_$${elevel}.png >> $@ ;\
	done

network_icons.h:
	echo "/* This file was automatically generated. DO NOT EDIT. */" > $@
	echo >> $@
	for icon in bluetooth usb wired wireless ; do \
		gdk-pixbuf-csource --raw --name=network_$${icon}_pb_data ../../image/toolbar/network_$${icon}_16.png >> $@ ;\
	done

remote_icons.h:
	echo "/* This file was automatically generated. DO NOT EDIT. */" > $@
	echo >> $@
	for icon in arrow globe sat ; do \
		gdk-pixbuf-csource --raw --name=remote_$${icon}_pb_data ../../image/toolbar/remote_$${icon}_16.png >> $@ ;\
	done

# XXX to be created
#	libqtui.vcproj
#	Makefile.nmake
EXTRA_DIST = \
	$(GENERATOR_FILES)		\
	$(QRC_IMAGES)			\
	CMakeLists.txt			\
	doxygen.cfg.in			\
	main.cpp			\
	Makefile.common			\
	Makefile_custom.common		\
	main_window.ui			\
	display_filter_16.svg		\
	gpl-template.txt
