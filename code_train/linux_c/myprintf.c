/*
 * =====================================================================================
 *
 *       Filename:  myprintf.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年06月18日 16时27分25秒
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
#include <stdarg.h>

void myprintf(const char *format, ...)
{
  va_list ap;
  char c;

  va_start(ap, format);
  while(c=*format++) {
    switch(c){
      case 'c': {
                  char ch = va_arg(ap, int);
                  putchar(ch);
                  break;
                }
      case 's': {
                  char *p = va_arg(ap, char *);
                  fputs(p, stdout);
                  break;
                }
      default:
                putchar(c);
    }
  }
  va_end(ap);
}

int main(void)
{
  myprintf("c\ts\n", '1', "hello");
  return 0;
}
