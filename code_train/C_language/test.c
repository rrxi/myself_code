/*
 * =====================================================================================
 *
 *       Filename:  test.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年11月05日 10时15分53秒
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

void (*funP)(int);
void (*funA)(int);
void myFun(int x);
int main(void) {
  /*
  int arr[10] = {
    10, 9, 8, 7
  };
  int *parr = arr;
  int (*p)[10] = &arr;
  printf("%ls\n", *p);
*/

  /*
  myFun(100);

  funP = &myFun;
  (*funP)(200);

  funA = myFun;
  funA(300);

  funP(400);
  (*funA)(600);
  (*myFun)(1000);

  */

  funP = &myFun;
  printf("sizeof(myFun)=%ld\n", sizeof(myFun));
  printf("sizeof(funP)=%ld\n", sizeof(funP));
  printf("myFun\t 0x%p=0x%p\n", &myFun, myFun);
  printf("funP\t 0x%p=0x%p\n", &funP, funP);
  printf("funA\t 0x%p=0x%p\n", &funA, funA);

  return 0;
}

void myFun(int x) {
  printf("myFun: %d\n", x);
}
