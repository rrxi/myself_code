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

extern char stack[512];
extern int top; 

void push(char c)
{
  stack[++top] = c;
}

