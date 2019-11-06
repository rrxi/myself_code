/*
 * =====================================================================================
 *
 *       Filename:  2_11_2.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年06月21日 10时00分30秒
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

char *cov_com(char line[]) {
  char *token = strtok(line, ";");
  printf("token: %s\n", token);
  char
}

int main(int argc, char *argv[]) {
  FILE *fp_ini, *fp_xml;
  char *fn_ini, *fn_xml;
  char line[1024];
  char *com;
  char *sec, *con;

  fn_ini = argv[1];
  fn_xml = argv[2];

  if((fp_ini=fopen(fn_ini, "r"))==NULL || (fp_xml=fopen(fn_xml, "w")==NULL)){
      perror("Open file\n");
      exit(1);
   }

  while(!feof(fp_ini)){
    line = fgets(line, 1024, fp_ini);
    char flag = line[0];
    switch(flag){
      case ';':
        com = cov_com(line);
    }

  }


}
