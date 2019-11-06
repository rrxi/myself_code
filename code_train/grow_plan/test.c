/*
 * =====================================================================================
 *
 *       Filename:  test.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年11月05日 16时49分00秒
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

int bss_array[1024 * 1024] = {
  1
};

char *get_str(void) {
  char *str = {
    "abcd"
  };
  str = "aaaa";
  return str;
}

int main(int argc, char* argv[]) {
  char *p = get_str();
  printf("%s\n", p);
  return 0;
}


