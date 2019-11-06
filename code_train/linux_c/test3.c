/*
 * =====================================================================================
 *
 *       Filename:  test3.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年04月17日 13时28分24秒
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

int w_GCD(int a, int b){
  while(a%b != 0){
    int temp = a;
    a = b;
    b = temp%b;
  }
  return b;
}

int w_fibonacci(int n){
  int i, sum=1, before=1;
  for(i=1; i<n; ++i){
    sum += before;
    before = sum;
  }
  return sum;
}

int number(int a, int b){
  int i = a;
  int number = 0;
  for(i; i<=b; i++){
    if(i%10 == 9 && i%100/10 == 9){
      number += 2;
    }else if(i%10 == 9){
      number += 1;
    }else if(i%9 == 0 && i%100/10 == 9){
      number += 1;
    }
  }
  return number;
}

int main(void){
  printf("%d\n", w_GCD(24, 36));
  printf("%d\n", w_fibonacci(4));
  printf("%d\n", number(1, 100));
}
