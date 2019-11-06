/*
 * =====================================================================================
 *
 *       Filename:  test1.3.c
 *
 *    Description:  bit sort
 *
 *        Version:  1.0
 *        Created:  2019年05月08日 20时08分53秒
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

char bit[N];
int num[6] = {2,1,6,5,8,13};

int main(void)
{
  int i = 0;
  for(i; i<20; i++){
    bit[i] = '0';
  }
  for(i=0; i<6; i++){
    int j = num[i];
    bit[j] = '1';
  }
  for(i=0; i<20; i++){
    if(bit[i] == '1')
      printf("%d\n",i);
  }
  return 0;
}
