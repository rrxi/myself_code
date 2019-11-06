/*
 * =====================================================================================
 *   
 *       Filename:   test_9.c
 *   
 *    Description:   
 *   
 *         Version:  1.0
 *         Created:  2019年10月12日 星期六 13时50分44秒
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
#include <string.h>

void print_tokens(char *line) {
  static char whitespace[] = " \t\f\r\v\n";
  char *token;

  for (token = strtok(line, whitespace); token != NULL; token = strtok(NULL, whitespace)) {
    printf("Next token is %s\n", token);
  }
}

int main(void) {
  char line[] = "Hello x r r";
  //printf("%s\n", strtok(line, " "));
  print_tokens(line);

  char *a =  "hello";
  a = "world";
  printf("%s\n", a);

  return 1;
}
