/*
 * =====================================================================================
 *
 *       Filename:  pm-dlist-main.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年05月14日 19时52分15秒
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
  /* GObject 库的类型管理系统初始化 */
 // g_type_init();

 // g_print("1");

  int i;
  PMDList *list;

  /* 进行三次对象实例化 */
  for(i=0; i<3; i++){
    list = g_object_new(PM_TYPE_DLIST, NULL);
    g_object_unref(list);
  }

  /* 检查实例是否为GObject对象 */
  list = g_object_new(PM_TYPE_DLIST, NULL);
  if(G_IS_OBJECT(list))
    g_print("\tthis is a instance GObject object！\n");

  return 0;
}
