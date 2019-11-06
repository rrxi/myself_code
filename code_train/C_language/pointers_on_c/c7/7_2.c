/*
 * =====================================================================================
 *   
 *       Filename:   7_2.c
 *   
 *    Description:   求最大公约数 
 *   
 *         Version:  1.0
 *         Created:  2019年10月09日 星期三 15时30分36秒
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

int gcd(int m, int n) {
  if (m<0 || n<0) {
    return 0;
  }
  
  int r = m%n;
 /*
  if (r == 0) {
    return n;
  } else {
    gcd(n, r);
  }
*/
  while(r){
    m = n;
    n = r; 
    r = m%n;
  }
  return n;
}

int main(void) {
  int result = gcd(48, 14);
  printf("%d\n", result);
  return 1;
}
