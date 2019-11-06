/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年11月05日 14时56分21秒
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
#include "dlist.h"

int dlist_get_max(int *ctx, int data) {
  *ctx = (data > *ctx) ? data : *ctx;
  return *ctx;
}

int dlist_get_sum(int *ctx, int data) {
   *ctx += data;
  return *ctx;
}



int main(void){
  DListNode * head = NULL;
  head = init_DListNode(head);
  display_DListNode(head);

  printf("元素3的位置是：%d\n",select_elem(head, 3));
  head = amend_elem(head, 3, 6);
  display_DListNode(head);

 // DListNode *first = head->next;
  int max = 0;
  int sum = 0;
  max = dlist_foreach(head, dlist_get_max, &max);
  sum = dlist_foreach(head, dlist_get_sum, &sum);
  printf("max: %d, sum: %d\n", max, sum);
  return 0;
}


