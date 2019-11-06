#include <stdio.h>
#include <stdlib.h>
int num = 0; 
long fibonacci (int n) {
  long result;
  long previous_result;
  long next_older_result;

  result = previous_result = 1;
  while (n > 2) {
    n -= 1;
    next_older_result = previous_result;
    previous_result = result;
    result = previous_result + next_older_result;
  }
  return result;
}

long dg_fib (int n) {
  num++;
  if (n <= 2) {
    return 1;
  }
  return dg_fib(n-1) + dg_fib(n-2);
}

int test(void) {
  return 3.14;
}

int main(){
  int c[5] = {1, 2, 3, 4, 5};
  int a = 5;
  int b = a++;
  printf("%d\n", b);
  printf("%d\n%d\n", 5>>1, 5<<1);
  a=test();
  printf("%d\n", a);
  dg_fib(25);
  printf("%d\n", num);
  printf("sizeof:%ld\n", sizeof(c));
  
  char *message = "hello";
  printf("%s\n%d\n", message, *message);
  message = "hi";
  printf("%s\n%d\n", message, *message);


  int matrix[2][3] = {100, 101, 102, 110, 111, 112};
  printf("%d\n", **(matrix+1));
  exit(0);
}
