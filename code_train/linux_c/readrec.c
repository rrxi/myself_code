/*
 * =====================================================================================
 *
 *       Filename:  readrec.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年06月17日 16时23分22秒
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

struct record {
  char name[10];
  int age;
};

int main(void) {
  struct record array[2];
  FILE *fp = fopen("recfile", "r");
  if(fp == NULL) {
    perror("Open file recfile");
    exit(1);
  }
  fread(array, sizeof(struct record), 2, fp);
  for(int i=0; i<2; i++){
    printf("Name%d: %s\tAge: %d\n", i, array[i].name, array[i].age);
  }
  fclose(fp);
  return 0;
}
