/*
 * =====================================================================================
 *   
 *       Filename:   8_5.c
 *   
 *    Description:   矩阵的乘法 
 *   
 *         Version:  1.0
 *         Created:  2019年10月11日 星期五 11时06分57秒
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

void matrix_multiply(int *m1, int *m2, int *r, int x, int y, int z) {
  int row, col, k;
  for (row = 0; row < x; row++) {
      printf("row\n");
    for (col = 0; col < z; col++) {
      for (k = 0; k < y; k++) {
        printf("%d %d row:%d col:%d k:%d\n", *(m1+row*y+k), *(m2+k*z+col), row, col, k);
        *(r+row*z+col) += *(m1+row*y+k) * *(m2+k*z+col); 
        printf("r+%d*%d+%d: %d\n", row, z, col, *(r+row*z+col));
      }
    }
  }
  for (row = 0; row < x; row++) {
    for (col = 0; col < z; col++) {
      printf("%d\t", *(r+row*z+col));
    }
    printf("\n");
  }
}

int mat1[3][2] = {
  {2, -6},
  {3, 5},
  {1, -1},
};

int mat2[2][4] = {
  {4, -2, -4, -5},
  {-7, -3, 6, 7},
};

int re[3][4];


int main(void) {
  matrix_multiply(*mat1, *mat2, *re, 3, 2, 4);
  printf("%d\n", re[0][1]);
  return 1;
}
