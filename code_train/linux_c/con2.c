/*
 * =====================================================================================
 *
 *       Filename:  con2.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年06月21日 11时15分41秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define DEBUG(format, ...) printf("FILE: "__FILE__", LINE: %d: "format"\n", __LINE__, ##__VA_ARGS__)
#define BUFFSIZE 64

int main(int argc, char *argv[]) {
  FILE *fp_src, *fp_dest;
  char buf[BUFFSIZE];
  char buf_out[BUFFSIZE];
  char head[16];
  char filename[16];
  int len;

  if(argc != 2)
    DEBUG("Usage: ./buld filename");

  len = strlen(argv[1]);
  if(strcmp(argv[1]+len-3, "ini") != 0)
    DEBUG("source file format error");
  fp_src = fopen(argv[1], "r");
  strcpy(filename, argv[1]);
  strcpy(&filename[len-3], "xml");

  fp_dest = fopen(filename, "w");

  while(fgets(buf, BUFFSIZE, fp_src) != NULL)
  {
    len = strlen(buf);
    buf[len-1] = '\0';

    switch(buf[0]){
      case '#':
        sprintf(buf_out, "<!-- %s -->\n", buf);
        break;
      case '!':
        sprintf(buf_out, "<%s>\n", buf+1);
        strcpy(head, buf+1);
        break;
      case '\0':
        sprintf(buf_out, "</%s>\n\n", head);
        break;
      default:
         char *p;
         p = strtok(buf, "=");
         p = strtok(NULL, "=");
         sprintf(buf_out, "\t<%s>%s</%s>\n", buf, p, buf);
    }
    fputs(buf_out, fp_dest);
  }

  fclose(fp_src);
  fclose(fp_dest);
  return 0;
}
