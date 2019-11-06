/*
 * =====================================================================================
 *
 *       Filename:  test10.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年04月19日 14时41分05秒
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

int main(void) {
  int sum = 0, i = 0;
  char input[5];

  while(1) {
    sum = 0;
    scanf("%s", input);
    for(i=0; input[i]!='\0'; i++)
      sum = sum*10 + input[i] - '0';
    printf("input=%d\n", sum);
  }

  return 0;
}
