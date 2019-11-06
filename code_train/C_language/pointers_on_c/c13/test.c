/*
 * =====================================================================================
 *   
 *       Filename:   test.c
 *   
 *    Description:   
 *   
 *         Version:  1.0
 *         Created:  2019年10月16日 星期三 14时06分06秒
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

void mystery(int n) {
  n += 5;
  n /= 10;
  printf("%s\n", "**********"+10-n);
}

int main(void) {
  mystery(0);
  mystery(1);
  mystery(16);
  mystery(100);
  return 1;

}
