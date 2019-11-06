/*
 * =====================================================================================
 *
 *       Filename:  test1_4.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2019年05月09日 13时26分07秒
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
#include <windows.h>
#include <algorithm>
#include <isotream>
#include <time.h>
#define MAXNUM 100000000

void swap(int *a, int *b)
{
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

int main(void)
{
  int i = 0;
  int *tmp = new int[MAXNUM+1];
  //在1-MAXNUM范围里生成LENGTH个不重复数字，按顺序得到1-MAXNUM，然后从第一位
  //开始到第MAXNUM位，每位生成一个随机数r,并让tmp[i]与tmp[r]交换，这样就生成
  //位置随机的随机数了
  for(i=0; i<MAXNUM; i++)
  {
    int p  = rand();
    
  }
}
