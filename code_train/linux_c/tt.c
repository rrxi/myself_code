/*
 * =====================================================================================
 *
 *       Filename:  tt.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年06月20日 14时51分21秒
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
#include <time.h>
#include <string.h>

int main(void){
   FILE * pFile;
//   char sentence [256];
//   printf ("Enter sentence to append: ");
//   fgets (sentence,256,stdin);
   pFile = fopen ("mylog.txt","a");
   fputs ("sentence",pFile);
   fclose (pFile);

   char *c1;
   char c2[] = "hhhh";
   memcpy(c1, c2, strlen(c2));
   printf("%s %s", c1, c2);
   return 0;
}
