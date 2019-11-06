/*
 * =====================================================================================
 *   
 *       Filename:   7_4.c
 *   
 *    Description:   
 *   
 *         Version:  1.0
 *         Created:  2019年10月09日 星期三 15时58分25秒
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
#include <stdarg.h>

int max_list(int n_vlaues, ...) {
  va_list var_arg;
  va_start(var_arg, n_vlaues);
  
  int max=-1, i=0;
  for (i; i<n_vlaues; i++) {
    int num = va_arg(var_arg, int);
    printf("%d\n", num);
    if (num < 0) {
      return max;
    } 
    if (num > max) {
      max = num;
    }
  }
  va_end(var_arg);

  return max;

}

int main(void) {
  int max = max_list(3, 1, 2, -1);
  printf("%d", max);
  return 1;
}
