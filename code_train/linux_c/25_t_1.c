/*
 * =====================================================================================
 *
 *       Filename:  25_t_1.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年06月17日 10时53分35秒
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

int main(int argc, char **argv){
  FILE *fp1;
  FILE *fp2;
  int ch;
  char *file1 = argv[1];
  char *file2 = argv[2];
  if( (fp1=fopen(file1,"r+"))==NULL || (fp2=fopen(file2,"w+"))==NULL) {
    perror("Open file \n");
    exit(1);
  }
  while((ch=fgetc(fp1))!=EOF)
    fputc(ch, fp2);
  fclose(fp1);
  fclose(fp2);
  return 0;
}
