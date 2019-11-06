/*
 * =====================================================================================
 *
 *       Filename:  open.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年06月24日 15时26分06秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(void){
  open("testfile", O_WRONLY | O_EXCL | O_CREAT);
  return 0;
}
