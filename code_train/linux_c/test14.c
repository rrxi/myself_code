/*
 * =====================================================================================
 *
 *       Filename:  test14.c
 *
 *    Description:  sort－快速排序
 *
 *        Version:  1.0
 *        Created:  2019年04月23日 15时39分29秒
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
#define LEN 5

int a[LEN] = {2, 4, 1, 3, 5};

int partition(int arr[], int start, int end)
{
  int pivot = arr[start];
  while(start < end) {
    while(start<end && arr[end]>=pivot)
      end--;
    arr[start++] = arr[end];
    while(start<end && arr[end]<=pivot)
      start--;
    arr[end--] = arr[start];
  }
  arr[start] = pivot;
  return start;
}

void quick_sort(int arr[], int start, int end){
  int pos;
  if(start<end){
    pos = partition(arr, start, end);
    quick_sort(arr,start,pos-1);
    quick_sort(arr,pos+1,end);
  }
  return;
}
int main(void)
{
  quick_sort(a, 0, LEN-1);
  for(int i=0; i<LEN; i++){
    printf("%d\t", a[i]);
  }
  return 0;

}
