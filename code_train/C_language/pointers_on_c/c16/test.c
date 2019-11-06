/*
 * =====================================================================================
 *
 *       Filename:  test.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年10月28日 15时48分51秒
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
#include <time.h>

#define TRUE 1
#define FALSE 0

void shuffle(int *deck, int n_card) {
  int i;
  static int first_time = TRUE;

  if (first_time) {
    first_time = FALSE;
    srand((unsigned int)time(NULL));
  }

  for (i = n_card-1; i > 0; i -= 1) {
    int where;
    int temp;

    where = rand() % i;
    temp = deck[where];
    deck[where] = deck[i];
    deck[i] = temp;
  }
}

int main(void) {
  int deck[5] = {
    1, 2, 3, 4, 5
  };
  int n_card = 5;

  shuffle(deck, 5);

  int i = 0;
  for (i; i<5; i++) {
    printf("%d ", deck[i]);
  }
}
