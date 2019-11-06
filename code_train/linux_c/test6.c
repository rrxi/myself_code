/*
 * =====================================================================================
 *
 *       Filename:  test6.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年04月18日 14时16分29秒
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

enum coordinate_type {RECTANGULAR = 1, POLAR };

int main(void){
  int RECTANGULAR;
  printf("%d %d\n", RECTANGULAR, POLAR);

  int a[3] = {1, 2, 3};
  int b[3];
  int i = 0;
  for(i; i<3; i++){
    b[i] = a[i];
  }
  for(i=0; i<3; i++){
    printf("%d\n", b[i]);
  }
  return 0;
}
