/*
 * =====================================================================================
 *
 *       Filename:  test.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年10月23日 10时32分52秒
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
#include <ctype.h>

int main(int ac, char **av) {
  int exit_status = EXIT_SUCCESS;
  FILE *input;

  while (*++av != NULL) {
    input = fopen(*av, "r");
    if (input == NULL) {
      perror(*av);
      exit_status = EXIT_FAILURE;
      continue;
    }
    if (fclose(input) != 0) {
      perror("fclose");
      exit(EXIT_FAILURE);
    }
  }

  int i = 0;
  char ch;
  puts("Input an integer followed by a char:");
  while( (ch=getchar()) != EOF && isdigit(ch)) {
    printf("%c\n", ch);
    i = 10 * i + ch - 48;
  }
  if (ch != EOF) {
    ungetc(ch, stdin);
  }
  printf("\n\ni=%d, next char in buffer = %c\n", i, getchar());
  system("pause");

  printf("%d\n", EOF);

  return exit_status;

}
