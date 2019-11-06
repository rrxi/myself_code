/*
 * =====================================================================================
 *
 *       Filename:  test_16.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年04月30日 15时59分12秒
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

int main(void) {
  int i = 0xcffffff3;
  printf("%x\n", 0xcffffff3>>2);
  printf("%x\n", i>>2);
}
