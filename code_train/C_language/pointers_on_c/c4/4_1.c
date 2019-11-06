/*                                                                                                                                                                  
 * =====================================================================================
 *   
 *       Filename:   4_1.c
 *   
 *   Description: 注意检测用户输入
 *   
 *         Version:  1.0
 *         Created:  2019年10月08日 星期二 14时44分08秒
 *        Revision:  none
 *        Compiler:  gcc
 *
 *         Author:  Ruoran.Xi
 *   Organization:  
 *
 * ===================================================================================
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float n;
  float new_guess, last_guess;
  scanf("%f", &n);
  if (n < 0) {
    printf("cannot compute the square root of a negative number!\n");
    return EXIT_FAILURE;
  }

  if (n == 0) {
    printf("square root of %g is 0\n", n);
  } else {
    new_guess = 1;
    do{
      last_guess = new_guess;
      new_guess = (last_guess + n / last_guess) / 2;
      printf("%.15e\n", new_guess);
    }while(new_guess != last_guess);
    printf("square root of %g is %g\n", n, new_guess);
  }

  return EXIT_SUCCESS;
}
