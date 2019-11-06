/*
 * =====================================================================================
 *
 *       Filename:  25_2.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年06月05日 10时02分33秒
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

int main(void){
  char str[] = "root:x::0:root:/root:/bin/bash:";
  char *token;

  token = strtok(str, ":");
  printf("%s\n", token);
  while((token=strtok(NULL, ":")) != NULL)
    printf("%s\n",token);
  return 0;
}
