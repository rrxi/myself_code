/*
 * =====================================================================================
 *
 *       Filename:  pm-dlist.h
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年05月15日 13时29分43秒
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

#define PM_TYPE_DLIST(pm_dlist_get_type())
#define PM_DLIST(object) G_TYPE_CHECK_INSTANCE_CAST((object),PM_TYPE_DLIST, PMDList)

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
