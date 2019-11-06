/*
 * =====================================================================================
 *
 *       Filename:  test4.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年04月18日 18时19分33秒
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

void half_number(void){
  int i, j;
  for (i=1; i<=9; i++){
    for (j=1; j<=i; j++){
      printf("%d\t", i*j);
    }
    printf("\n");
  }
}

void com_number(void){
  int i, j;
  for(i=1; i<=9; i++){
    for(j=1; j<=9; j++){
      printf("%d\t", i*j);
    }
    printf("\n");
  }
}

void diamond(int num, char graph){
  if (num%2 == 0){
    printf("print error.please input odd number");
    return;
  }

  int i, j, count;
  count = -1;
  for(i=num/2; i>=0; --i){
    count += 2;
    for(j=i; j>0; --j){
      printf("\t");
    }
    for(j=count; j>0; --j){
      printf("%c\t", graph);
    }
    printf("\n");
  }

  for(i=num/2+1; i<num; ++i){
    for(j=i-num/2; j>0; --j)
      printf("\t");
    for(j=count-2; j>0; --j)
      printf("%c\t", graph);
    printf("\n");
    count -= 2;
  }

}
int main(void){
  com_number();
  printf("\n");
  half_number();
  printf("\n");
  diamond(3, '*');
  printf("\n");
  diamond(5, '+');
  printf("\n");
  diamond(6, '$');
  return 0;
}
