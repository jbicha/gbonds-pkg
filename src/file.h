/*
 *  (GBONDS) GNOME based Savings Bond Inventory Program
 *
 *  file.h:  FILE menu dialog module header file
 *
 *  Copyright (C) 2000-2003  Jim Evins <evins@snaught.com>.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
 */

#ifndef __FILE_H__
#define __FILE_H__

#include "recent-files/egg-recent-view.h"
#include <gtk/gtk.h>

#include "doc.h"
#include "window.h"

G_BEGIN_DECLS

void     gb_file_new         (GtkWindow       *window);


void     gb_file_open        (GtkWindow       *window);


gboolean gb_file_open_recent (EggRecentView   *view,
			      EggRecentItem   *item,
			      GtkWindow       *window);;

gboolean gb_file_open_real   (const gchar     *filename,
			      GtkWindow       *window);


void     gb_file_import      (GtkWindow       *window);

gboolean gb_file_save        (gbDoc           *doc,
			      GtkWindow       *window);

gboolean gb_file_save_as     (gbDoc           *doc,
			      GtkWindow       *window);


gboolean gb_file_close       (gbWindow        *window);

void     gb_file_exit        (void);

G_END_DECLS

#endif /* __FILE_H__ */
