#include <stdio.h>
#include <stdlib.h>

int main(void){
  enum Liquid {
    OUNCE = 1, CUP = 8, PINT = 16, QUART = 32, GALLON = 128
  };
  enum Liquid jar;
  jar = QUART;
  printf("%c\n", jar);
  printf("%c\n", jar+PINT);
  exit(0);
}
