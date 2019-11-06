/*
 * =====================================================================================
 *
 *       Filename:  25.5.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年06月17日 10时25分50秒
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
  FILE *fp;
  int ch;

  if((fp=fopen("file2", "w+")) == NULL){
    perror("Open file file2\n");
    exit(1);
  }

  while((ch=getchar())!=EOF)
    fputc(ch,fp);
  rewind(fp);
  while((ch=fgetc(fp))!=EOF)
    putchar(ch);
  fclose(fp);
  return 0;
}
