/*
 * =====================================================================================
 *   
 *       Filename:   test.c
 *   
 *    Description:   
 *   
 *         Version:  1.0
 *         Created:  2019年10月15日 星期二 10时59分58秒
 *        Revision:  none
 *        Compiler:  gcc
 *
 *         Author:  Ruoran.Xi
 *   Organization:  
 *
 * ===================================================================================
*/

#include <stdlib.h>
#include <stdio.h>

int compare_integers(void const *a, void const *b) {
  register int const *pa = a;
  register int const *pb = b;

  return *pa > *pb ? 1 : *pa < *pb ? -1 : 0;
}

int main() {
  int *array;
  int n_values;
  int i;

  printf("how many values are there? ");
  if (scanf("%d", &n_values) != 1 || n_values <= 0) {
    printf("illegal number of values.\n");
    exit(EXIT_FAILURE);
  }

  array = malloc(n_values * sizeof(int));
  if (array == NULL) {
    printf("can't get memory for that many values.\n");
    exit(EXIT_FAILURE);
  }

  for (i = 0; i < n_values; i += 1) {
    printf("? ");
    if (scanf("%d", array+i) != 1) {
      printf("error reading value #%d\n", i);
      free(array);
      exit(EXIT_FAILURE);
    }
  }

  qsort(array, n_values, sizeof(int), compare_integers);

  for (i = 0; i < n_values; i += 1) {
    printf("%d\n", array[i]);
  }

  free(array);
  return EXIT_SUCCESS;
}
