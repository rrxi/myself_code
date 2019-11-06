/*
 * =====================================================================================
 *
 *       Filename:  25_6.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年06月17日 15时00分23秒
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
  if((fp=fopen("file1","r+"))==NULL){
    perror("Open file file1");
    exit(1);
  }
  if(fseek(fp, 10, SEEK_SET)!=0){
    perror("Seek file file1");
    exit(1);
  }
  fputc('K', fp);
  fclose(fp);
  return 0;
}
