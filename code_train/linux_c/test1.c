/*
 * =====================================================================================
 *
 *       Filename:  test1.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年04月16日 17时33分30秒
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
#include <math.h>

int increment(int x){
  x = x + 1;
  return x;
}

void foo(void){
  int i;
  printf("%d\n",i);
  i=777;
}
int main(void){
  //printf("Hello,world!\n");
  //printf("\a");
  //printf("\t");
  //printf("\v");
  //printf("Char: %c",'%');
  //printf("\n%d",17/4+1);
  //double pi = 3.1416;
  //printf("\nsin(pi/2)=%f\nln1=%f\n", sin(pi/2), log(1.0));
  /*
  int i = 1, j = 2;
  increment(i);
  increment(j);
  printf("i: %d, j:%d", i,j);
  */

  foo();
  printf("hello\n");
  foo();

  int x = -1;
  if(x>0);
    printf("x is positive.\n");
  return 0;

}

