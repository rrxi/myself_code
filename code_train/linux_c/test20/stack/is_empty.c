/*
 * =====================================================================================
 *
 *       Filename:  test20_1_1.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年05月10日 13时44分23秒
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

extern int top;

int is_empty(void)
{
  return top== -1;
}

