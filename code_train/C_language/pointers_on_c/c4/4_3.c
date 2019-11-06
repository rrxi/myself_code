/*
 * =====================================================================================
 *   
 *       Filename:   4_3.c
 *   
 *    Description:   judge triangle kind
 *   
 *         Version:  1.0
 *         Created:  2019年10月08日 星期二 15时32分44秒
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

int main(void) {
  int edge_a, edge_b, edge_c;
  printf("input triangle a, b, c:\n");
  scanf("%d %d %d", &edge_a, &edge_b, &edge_c);
  if (edge_a+edge_b>edge_c && edge_b+edge_c>edge_a && edge_a+edge_c>edge_b) {
    if (edge_a==edge_b && edge_b==edge_c) {
      printf("equal all edge triangle\n");
    } else if (edge_a==edge_b || edge_a==edge_c || edge_b==edge_c) {
      printf("equal two edge triangle\n");
    } else if (edge_a*edge_a+edge_b*edge_b==edge_c*edge_c || edge_a*edge_a+edge_c*edge_c==edge_b*edge_b || edge_b*edge_b+edge_b*edge_b==edge_a*edge_a) {
      printf("right angle triangle\n");
    } else {
      printf("ordinary triangle\n");
    }
  }else{
    printf("cannot become triangle\n");
  }
  return EXIT_SUCCESS;
}
