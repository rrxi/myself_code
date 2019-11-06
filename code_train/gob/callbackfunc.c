/*
 * =====================================================================================
 *
 *       Filename:  callbackfunc.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年05月21日 13时34分46秒
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
#include <string.h>

static int str_compare(const void *s1, const void *s2)
{
  char *str1 = *(char **)s1;
  char *str2 = *(char **)s2;
  size_t l1 = strlen(str1);
  size_t l2 = strlen(str2);

  if(l1>l2)
    return 1;
  else if(l1==l2)
    return 0;
  else
    return -1;
}

int main(void)
{
  char *str_array[5] = {"a", "abcd", "abc", "ab", "abcde"};
  qsort(str_array, 5, sizeof(char *), str_compare);

  for(int i=0; i<5; i++)
    printf("%s ", str_array[i]);
  printf("\n");

  return 0;
}
