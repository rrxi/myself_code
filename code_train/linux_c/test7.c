/*
 * =====================================================================================
 *
 *       Filename:  test7.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年04月18日 15时13分57秒
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
#define N 20

int a [N];

void gen_random(int upper_bound){
  int i;
  for(i=0; i<N; i++){
    a[i] = rand() % upper_bound;
  }
}

int main(void){
  int i, j, histogram[10] = {0}, sum;
  gen_random(10);
  for(i=0; i<N; i++){
    histogram[a[i]]++;
  }
  for(i=0; i<10; i++){
    printf("%d ", i);
  }
  printf("\n");
  for(i=0; i<=9;  i++){
    printf("%d ", histogram[i]);
  }
  printf("\n");
  do {
    sum = 0;
    for(i=0; i<=9; i++)
      sum += histogram[i];
    for(j=0; j<=9; j++){
      if(histogram[j] != 0){
        printf("* ");
        --histogram[j];
      }else
        printf("  ");
    }
    printf("\n");
  }while(sum != 0);
  return 0;
}
