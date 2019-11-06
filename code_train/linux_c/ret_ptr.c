/*
 * =====================================================================================
 *
 *       Filename:  ret_ptr.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年06月04日 14时31分49秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <string.h>
#include "ret_ptr.h"

static const char *msg[] = {"Sunday", "Monday", "Tuesday", "Wednesday",
                            "Thursday", "Friday", "Saturday"};

char *get_a_day(int idx){
  static char buf[20]={'\0'};
  strcpy(buf, msg[idx]);
  return buf;
}
