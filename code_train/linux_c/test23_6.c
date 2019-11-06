/*
 * =====================================================================================
 *
 *       Filename:  test23_6.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年05月31日 13时47分56秒
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

int main(void){
  char c = 'A';
  char *p1 = &c;
  c = 'B';
  char a = 'C';
  char *p2 = &a;
  p1 = &a;
  //char *const *p = &p1;
  char **const p = &p1;
  *p = &p2;
  printf("%c", *p);
  return 0;
}
