/*
 * =====================================================================================
 *
 *       Filename:  ioctl.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年06月24日 17时11分22秒
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
#include <unistd.h>
#include <sys/ioctl.h>

int main(void)
{
  struct winsize size;
  if(isatty(STDOUT_FILENO)==0)
    exit(1);
  if(ioctl(STDOUT_FILENO, TIOCGWINSZ, &size)<0) {
    perror("ioctl TIOCGWINSZ error");
    exit(1);
  }
  printf("%d rows, %d columns\n", size.ws_row, size.ws_col);
  return 0;
}
