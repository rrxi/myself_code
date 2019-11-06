/*
 * =====================================================================================
 *
 *       Filename:  printflist.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年06月18日 17时19分00秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include printlist(int begin, ...)
{
  va_list ap;
  char *p;

  va_start(ap, begin);
  p = va_arg(ap, char *);

  while(p!=NULL) {
    fputs(p, stdout);
    putchar('\n');
    p = va_arg(ap, char*);
  }
  va_end(ap);
}

int main(void)
{
  printlist(0, "hello", "world", "foo", "bar", NULL);
  return 0;
}
