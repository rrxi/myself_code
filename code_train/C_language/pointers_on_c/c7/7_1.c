/*
 * =====================================================================================
 *   
 *       Filename:   7_1.c
 *   
 *    Description:   
 *   
 *         Version:  1.0
 *         Created:  2019年10月09日 星期三 15时16分10秒
 *        Revision:  none
 *        Compiler:  gcc
 *
 *         Author:  Ruoran.Xi
 *   Organization:  
 *
 * ===================================================================================
*/

#include <stdlib.h>
#include <stdio.h>

int hermite(int n, int x) {
  if (n <= 0) {
    return 1;
  } else if (n == 1) {
    return 2*x;
  } else {
    return 2*x*hermite(n-1, x) - 2*(n-1)*hermite(n-2, x);
  }
}

int main(void) {
  int a = hermite(3, 2);
  printf("%d\n", a);
  return 1;
}
