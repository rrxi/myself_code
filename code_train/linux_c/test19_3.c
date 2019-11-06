/*
 * =====================================================================================
 *
 *       Filename:  test19_3.c
 *
 *    Description:  test Big-endian , Little-endian
 *
 *        Version:  1.0
 *        Created:  2019年05月10日 10时56分00秒
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

int main(void)
{
  union {
    int i;
    unsigned char byte[4];
  }u;

 /* u.byte[0] = '1';
  u.byte[1] = '2';
  u.byte[2] = '3';
  u.byte[3] = '4';
  printf("%d",u.i);*/

  u.i = 0x1234;
  printf("%c",u.byte[0]);
  return 0;
}
