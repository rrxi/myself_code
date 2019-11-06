/*
 * =====================================================================================
 *
 *       Filename:  test11_3.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年04月26日 14时58分29秒
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

char a[] = "hello world";
int num[5] = {2, 1, 3, 5, 4};

int indexof(char letter)
{
  int i = 0;
  while (a[i] != '\0') {
    if(a[i]==letter)
      return i;
    i++;
  }
  return -1;
}

int find_min(int a[])
{
  int i=0;
  int min = a[0];
  for(i; i<5; i++){
    if(a[i]<min){
        min = a[i];
    }
  }
  return min;
}

int main(void)
{
  printf("%d %d\n", indexof('o'), indexof('z'));
  printf("min: %d\n", find_min(num));
  return 0;
}
