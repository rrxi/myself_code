/*
 * =====================================================================================
 *
 *       Filename:  test.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年04月17日 17时12分18秒
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
int test(int argc, char **argv){
  void *ret = __builtin_return_address(0);
  printf("%p\n", ret - 1);

  void *caller = __builtin_frame_address(0);

  printf("%p\n", caller);
  return 0;
}

int main(int argc, char **argv){
  test(argc, argv);
  return 0;
}
