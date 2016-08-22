 /* csids.h
 *
 * $Id: csids.h 37543 2011-06-04 21:20:57Z rbalint $
 *
 * Copyright (c) 2000 by Mike Hall <mlh@io.com>
 * Copyright (c) Cisco Systems
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 *
 */

#ifndef __CSIDS_H__
#define __CSIDS_H__
#include <glib.h>
#include <wtap.h>

int csids_open(wtap *wth, int *err, gchar **err_info);

#endif
