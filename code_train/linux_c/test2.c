/*
 * =====================================================================================
 *
 *       Filename:  test2.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年04月16日 14时00分35秒
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
#include <math.h>

void eve_odd(int x){
  int i = x % 10;
  int j = x % 100 / 10;
  printf("个位：%d, 十位：%d\n", i,j);
}

int is_leap_year(int year){
  if(year%4==0 && year%100!=0)
    return 1;
  else if(year%400 == 0)
    return 1;
  else
   return 0;
}

void print_year(int year){
  int log = is_leap_year(year);
  if(log)
    printf("%d是闰年。\n",year);
  else
    printf("%d不是闰年。\n",year);
}

double myround(double x){
  if(x<0.0){
    ceil(x);
    return x;
  }
  else{
    floor(x);
    return x;
  }
}

int euclid(int x, int y){
  int GCD = 0;
  if(x%y == 0){
    GCD = y;
    return GCD;
  }
  else{
    GCD = euclid(y, x%y);
    return GCD;
  }
}

int fibs(int n){
  int fib = 0;
  if(n == 0 || n == 1){
    fib = 1;
  }
  else{
    fib = fibs(n-1) + fibs(n-2);
  }
  return fib;
}

int main(void){
  eve_odd(986870);

  print_year(2016);
  print_year(2015);
  print_year(2000);
  print_year(1992);

  //printf("%f",myround(-3.51));
  //printf("%f",myround(4.49));

  printf("%d\n", euclid(3,6));
  printf("%d\n", euclid(36,24));

  printf("%d\n", fibs(0));
  printf("%d\n", fibs(1));
  printf("%d\n", fibs(2));
  printf("%d\n", fibs(3));
  return 0;
}
