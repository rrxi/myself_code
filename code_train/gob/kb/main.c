/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年05月15日 16时11分26秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include "kb-bibtex.h"

int main(void)
{
  g_type_init();

  KbBibtex *entry = g_object_new(KB_TYPE_BIBTEX,
                                 "title", "The {\\TeX}Book",
                                 "author", "Knuth,D.E",
                                 "publisher", "Addison-Wesley Professional",
                                 "year", 1984,
                                 NULL);
  kb_bibtex_printf(entry);


  g_object_unref(entry);
  return 0;
}
