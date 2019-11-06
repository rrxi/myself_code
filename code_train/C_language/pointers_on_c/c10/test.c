/*
 * =====================================================================================
 *   
 *       Filename:   test.c
 *   
 *    Description:   
 *   
 *         Version:  1.0
 *         Created:  2019年10月14日 星期一 16时58分31秒
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

typedef struct {
  int q_num;
  int ex_num;
  int st_num;
}phone;

typedef struct {
  char *datetime;
  phone use_phone;
  phone call_phone;
  phone pay_phone;
}message;

struct {
  int a:2;
}x;

int main(void) {
  x.a = 1;
  x.a += 1;
  printf("%d\n", x.a);
  return 1;
}
