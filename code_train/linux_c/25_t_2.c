/*
 * =====================================================================================
 *
 *       Filename:  25_t_2.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年06月17日 15时48分27秒
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
  char *s = (char*)malloc(100);//注意s的声明方式
  char *file1 = argv[1];
  char *file2 = argv[2];
  if((fp1=fopen(file1, "r+"))==NULL || (fp2=fopen(file2, "w+"))==NULL){
    perror("Open file\n");
    exit(1);
  }
  while(fgets(s, 100, fp1)!=NULL){
    if(fputs(s, fp2)==EOF){
      printf("cp error");
    }
  }
  fclose(fp1);
  fclose(fp2);
  return(0);
}
