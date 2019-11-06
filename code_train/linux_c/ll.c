/*
 * =====================================================================================
 *
 *       Filename:  ll.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年05月31日 17时03分39秒
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

int main(void){
  int i=0, a=0;
  while(i<20){
    for(;;){
      if(i%10==0)
        break;
      else
        i--;
      printf("%d\n",i);
    }
    i+=11;
    a+=i;
  }
  printf("%d",a);
  return 0;
}
