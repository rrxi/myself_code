/*
 * =====================================================================================
 *   
 *       Filename:   test.c
 *   
 *    Description:   
 *   
 *         Version:  1.0
 *         Created:  2019年10月17日 星期四 16时39分42秒
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

#define PRINT(FORMAT, VALUE) \
  printf("The value is " FORMAT "\n", VALUE);

int main(void) {
  PRINT("%d", 5);
  int x = 6;
  PRINT("%d", x+3);
  return 1;
}
