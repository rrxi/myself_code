/*
 * =====================================================================================
 *
 *       Filename:  24_4.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年06月04日 14时35分06秒
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
#include "ret_ptr.h"

int main(void){
  printf("%s %s\n", get_a_day(0), get_a_day(1));
  printf("%s \n", get_a_day(1));
  return 0;
}
