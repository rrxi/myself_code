/*
 * =====================================================================================
 *
 *       Filename:  test19.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年05月09日 16时49分44秒
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

int bar(int c, int d)
{
  int e = c + d;
  return e;
}
int foo(int a, int b)
{
  return bar(a,b);
}
int main(void)
{
  foo(2,3);
  return 0;
}
