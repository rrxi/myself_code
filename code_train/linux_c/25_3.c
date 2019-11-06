/*
 * =====================================================================================
 *
 *       Filename:  25_3.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年06月21日 13时48分13秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
#include <errno.h>

int main(int argc, char *argv[]){
  int base;
  char *endptr, *str;
  long val;

  if(argc < 2) {
    fprintf(stderr, "Usage: %s str [base]\n", argv[0]);
    exit(EXIT_FAILURE);
  }

  str = argv[1];
  base = (argc>2)?atoi(argv[2]):10;

  errno = 0;
  val = strtol(str, &endptr, base);

  if((errno == ERANGE && (val == LONG_MAX || val == LONG_MIN))
      || (errno != 0 && val == 0)) {
    perror("strtol");
    exit(EXIT_FAILURE);
  }

  if(endptr == str) {
    fprintf(stderr, "No digits were found\n");
    exit(EXIT_FAILURE);
  }

  printf("strtol() returned %ld\n", val);

  if(*endptr != '\0')
    printf("Further characters after number: %s\n", endptr);

  exit(EXIT_SUCCESS);
}
