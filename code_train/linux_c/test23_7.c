/*
 * =====================================================================================
 *
 *       Filename:  test23_7.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年05月31日 14时29分09秒
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
    char a[4][3][2] = {{{'a', 'b'}, {'c', 'd'}, {'e', 'f'}},
                       {{'g', 'h'}, {'i', 'j'}, {'k', 'l'}},
                       {{'m', 'n'}, {'o', 'p'}, {'q', 'r'}},
                       {{'s', 't'}, {'u', 'v'}, {'w', 'x'}}};
    char (*pa)[2] = &a[1][0];
    char (*ppa)[3][2] = &a[1];
    printf("%c", pa[5][1]);
    printf("%c", ppa[1][2][1]);
    //printf("%c", ppa[
}
