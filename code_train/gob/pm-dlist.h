/*
 * =====================================================================================
 *
 *       Filename:  pm-dlist.h
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年05月14日 19时40分25秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#ifndef PM_DLIST_H
#define PM_DLIST_H

#include <glib-object.h>

#define PM_TYPE_DLIST (pm_dlist_get_type())


typedef struct _PMDList PMDList;
struct _PMDList {
  GObject parent_instance;
};

typedef struct _PMDListClass PMDListClass;
struct _PMDListClass {
  GObjectClass parent_class;
};

GType pm_dlist_get_type(void);

#endif

