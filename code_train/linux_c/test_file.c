/*
 * =====================================================================================
 *
 *       Filename:  test_file.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年06月14日 16时55分48秒
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

int main(void){
  FILE *fp;
  fp = fopen("/home/ruoran.xi/", "r+");
  if(fp == NULL) {
    perror("Open /home/ruoran.xi");
    exit(1);
  }
}
