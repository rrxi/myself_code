/*
 * =====================================================================================
 *
 *       Filename:  test9.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年04月18日 17时38分42秒
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

int factorial(int n) {
  if(n == 0)
    return 1;
  else {
    int recurse = factorial(n-1);
    int result = n * recurse;
    return result;
  }
}

int main(void) {
  int result = factorial(3);
  printf("%d\n", result);
  return 0;
}
