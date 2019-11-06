/*
 * =====================================================================================
 *
 *       Filename:  test20_1_2.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年05月10日 13时46分09秒
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
#include "stack.h"

int a, b = 1;
int main(void)
{
  push('a');
  push('b');
  push('c');
  while(!is_empty())
    putchar(pop());
  putchar('\n');
  return 0;
}
