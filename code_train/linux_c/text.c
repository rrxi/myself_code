/*
 * =====================================================================================
 *
 *       Filename:  test.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年04月17日 16时55分54秒
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
#include <mcheck.h>

int main(int argc, char **argv){
  mtrace();
  char *p = malloc(100);
  free(p);
  p = malloc(1000);
  muntrace();
  return 0;
}
