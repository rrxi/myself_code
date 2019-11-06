/*
 * =====================================================================================
 *
 *       Filename:  kb-bibtex.h
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年05月15日 15时26分30秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#ifndef KB_BIBTEX_H
#define KB_BIBTEX_H

#include <glib-object.h>

#define KB_TYPE_BIBTEX (kb_bibtex_get_type ())

#define KB_BIBTEX(object) G_TYPE_CHECK_INSTANCE_CAST((object), KB_TYPE_BIBTEX, KbBibtex)

typedef struct _KbBibtex KbBibtex;
struct _KbBibtex {
  GObject parent_instance;
};

typedef struct _KbBibtexClass KbBibtexClass;
struct _KbBibtexClass {
  GObjectClass parent_class;
};

GType kb_bibtex_get_type(void);

#endif

void kb_bibtex_printf(KbBibtex *self);
