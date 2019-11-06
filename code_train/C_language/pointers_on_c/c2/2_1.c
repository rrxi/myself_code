#include <stdio.h>
#include <stdlib.h>

int main(void) {
  printf("------increment------\n");
  printf("%d\n", increment(10));
  printf("%d\n", increment(0));
  printf("%d\n", increment(-10));
  printf("------negate------\n");
  printf("%d\n", negate(10));
  printf("%d\n", negate(0));
  printf("%d\n", negate(-10));
  return 0;
}
