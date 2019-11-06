/*
 * sterror和perror的区别
 * */

#include "../apue.h"
#include <errno.h>

int main(int argc, char *argv[]) {
  fprintf(stderr, "EACCES: %s\n", strerror(EACCES));
  errno = ESRCH;
  perror(argv[0]);
  exit(0);
}
