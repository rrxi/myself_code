/*
 * =====================================================================================
 *   
 *       Filename:   8_3.c
 *   
 *    Description:   
 *   
 *         Version:  1.0
 *         Created:  2019年10月11日 星期五 10时25分48秒
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

int indentity_matrix(int matrix[][3]) {
  int i, j;
  for (i=0; i<3; i++) {
    for (j=0; j<3; j++) {
      if (i == j) {
        if (matrix[i][j] == 1) {
          continue;
        } else {
          return 0;
        }
      } else {
        if (matrix[i][j] == 0) {
          continue;
        } else {
          return 0;
        }
      }
    }
  }
  return 1;
}

int up_indentity_matrix(int *row, int size) {
  int i, j;
  for (i=0; i<size; i++) {
    for (j=0; j<size; j++) {
      if (i == j) {
        if ((*(row+i*size+j)) == 1) {
          continue;
        } else {
          return 0;
        }
      } else {
        if ((*(row+i*size+j)) == 0) {
          continue;
        } else {
          return 0;
        }
      }
    }
  }
  return 1;
}

int matrix[3][3] = {
  {1, 0, 0},
  {0, 1, 0},
  {0, 0, 1},
};

int main(void) {
  if (indentity_matrix(matrix)) {
    printf("indentity matrix\n");
  } else {
    printf("unindentity matrix\n");
  }
  if (up_indentity_matrix(*matrix, 3)) {
    printf("indentity matrix\n");
  } else {
    printf("unindentity matrix\n");
  }

  return 1;
}
