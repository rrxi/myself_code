/*
 * =====================================================================================
 *
 *       Filename:  test8.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年04月18日 16时54分47秒
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

int add_range(int low, int high) {
  int i, sum=0;
  for(i=low; i<=high; i++) {
    sum = sum + i;
  }
  return sum;
}

int main(void) {
  int result[100];
  result[0] = add_range(1, 10);
  result[1] = add_range(1, 100);
  printf("result[0]=%d\nreuslt[1]=%d\n", result[0], result[1]);
  return 0;
}
