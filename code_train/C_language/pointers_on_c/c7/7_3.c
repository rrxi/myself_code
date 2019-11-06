/*
 * =====================================================================================
 *   
 *       Filename:   7_3.c
 *   
 *    Description:   将不含字母的字符串转换成整数输出
 *
 *                   可以通过将指针++来遍历字符串
 *                   如果情况复杂，就考虑其对立面
 *
 *   
 *         Version:  1.0
 *         Created:  2019年10月09日 星期三 15时47分56秒
 *        Revision:  none
 *        Compiler:  gcc
 *
 *         Author:  Ruoran.Xi
 *   Organization:  
 *
 * ===================================================================================
*/

#include <stdlib.h>
#include <stdio.h>

int ascii_to_integer(char *string) {
  int value = 0;
  
  while (*string>='0' && *string<='9') {
    value *= 10;
    value += *string - '0';
    string++;
  }

  if (*string != '\0') {
    value = 0;
  }

  return value;
}

int main(void) {
  int result = ascii_to_integer("df");
  printf("%d\n", result);
  result = ascii_to_integer("1328");
  printf("%d\n", result);
  return 1;
}
