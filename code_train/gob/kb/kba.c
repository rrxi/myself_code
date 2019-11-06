/*
 * =====================================================================================
 *
 *       Filename:  kba.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年05月17日 09时39分05秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include "kb-article.h"

int main(void)
{
  g_type_init();

  KbArticle *entry = g_object_new(KB_TYPE_ARTICLE,
                                  "title", "Breaking paragraphs into linrs",
                                  "author", "Kuth, D.E. and Plass, M.F",
                                  "publisher", "Wiley Online Library",
                                  "journal", "Software: Practice and Experience",
                                  "volume", "11",
                                  "number", "11",
                                  "year", 1981,
                                  "pages", 1119-1184,
                                  NULL);
  kb_article_printf(entry);

  g_object_unref(entry);
  return 0;
}
