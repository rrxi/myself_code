/*
 * =====================================================================================
 *
 *       Filename:  test1_2.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年05月09日 10时11分44秒
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

#define BITSPERWORD 32
#define SHIFT 5
#define MASK 0x1F
#define N 10000000
int num[6] = {1,3,5,2,6,19};
int a[1+(N-1)/BITSPERWORD];

//置１
void set(int i)
{
  a[i>>SHIFT] |= (1<<(i&MASK));
}

//置０
void clr(int i)
{
  a[i>>SHIFT] &= ~(1<<(i&MASK));
}

//读取值
int test(int i)
{
  return a[i>>SHIFT] & (1<<(i&MASK));
}

int main()
{
  int i;
  for(i=0; i<N; i++){
    clr(i);
  }
  for(i=0; i<6; i++)
  {
    set(num[i]);
  }
  for(i=0;i<N;i++)
  {
    if(test(i))
      printf("%d\n",i);
  }
  return 0;
}

