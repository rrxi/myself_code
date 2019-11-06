/*
 * =====================================================================================
 *
 *       Filename:  main_ll.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年06月21日 17时07分59秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
#include "linkedlist.h"

int main(void)
{
  LinkedList list, start;

  printf("input linkedlist data: ");
  list = LinkedListCreatT();
  for(start = list->next; start!=NULL; start=start->next)
    printf("%d->", start->data);
  printf("\n");

  int i;
  ElemType x;
  printf("input insert data pos: ");
  scanf("%d", &i);
  printf("input insert data: ");
  scanf("%d", &x);
  LinkedListInsert(list, i, x);
  for(start = list->next; start!=NULL; start=start->next)
    printf("%d->", start->data);

  printf("\n");
  printf("input delete data: ");
  scanf("%d", &x);
  LinkedListDelete(list, x);
  for(start=list->next; start!=NULL; start=start->next)
    printf("%d->", start->data);
  printf("\n");

  return 0;

}
