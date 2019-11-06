/*
 * =====================================================================================
 *
 *       Filename:  test23_1.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年05月22日 13时21分53秒
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

int *swap(int *px, int *py)
{
  int temp;
  temp = *px;
  *px = *py;
  *py = temp;
  return px;
}

int main(void)
{
  int i = 10, j = 20;
  int *p = swap(&i, &j);
  printf("now i=%d, j=%d, *p=%d\n", i, j, *p);
  return 0;
}
