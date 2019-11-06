/*
 * =====================================================================================
 *
 *       Filename:  kb-article.h
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年05月16日 16时47分35秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#ifndef KB_ARTICLE_H
#define KB_ARTICLE_H

#include <glib-object.h>
#include "kb-bibtex.h"

#define KB_TYPE_ARTICLE (kb_article_get_type())

#define KB_ARTICLE(object) \
  G_TYPE_CHECK_INSTANCE_CAST((object), KB_TYPE_ARTICLE, KbArticle)

typedef struct _KbArticle KbArticle;
struct _KbArticle {
  KbBibtex parent;
};

typedef struct _KbArticleClass KbArticleClass;
struct _KbArticleClass {
  KbBibtexClass parent_class;
};

GType kb_article_get_type(void);

#endif

void kb_article_printf(KbArticle *self);
