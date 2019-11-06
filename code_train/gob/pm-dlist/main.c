/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年05月15日 14时12分33秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include "pm-dlist.h"

int main(void)
{
  g_type_init();

  PMDList *list;
  list = g_object_new(PM_TYPE_DLIST,
                      "head", NULL,
                      "tail", NULL,
                      NULL);
  g_object_unref(list);
  return 0;
}
