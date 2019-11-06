/*
 * =====================================================================================
 *
 *       Filename:  test24_1_1.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年05月31日 16时06分02秒
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
#include <stdbool.h>

char *my_strcp(char *dest, const char *src){
    char *temp = dest;
    while(*src)
      *dest++ = *src++;
    return temp;
}

bool is_space(char c){
  if(c==' ' || c =='\t' || c=='\r' || c=='\n')
    return true;
  else
    return false;
}

char *shrink_space(char *dest, const char *src, size_t n){
  char *temp = dest;
  size_t i=0, j=0;
  for(i; i<n && src[i] != '\0'; i++){
    if(is_space(src[i]) && is_space(src[i+1]))
        continue;
    else
      dest[j++] = src[i];
  }
  for( ; i<n; i++){
    dest[i] = '\0';
  }
  return temp;
}

int main(void){
  char buf1[10];
  printf("%s\n", my_strcp(buf1, "Hello"));
  char buf2[10];
  printf("\n%s", shrink_space(buf2, " A j  k l", 10));
  return 0;
}
