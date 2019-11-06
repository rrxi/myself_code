/*
 * =====================================================================================
 *
 *       Filename:  a_stack.c
 *
 *    Description:  静态数组实现堆栈
 *
 *        Version:  1.0
 *        Created:  2019年10月31日 09时46分32秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */

#include "stack.h"
#include <stdlib.h>
#include <assert.h>

#define STACK_SIZE 100

static STACK_TYPE stack[STACK_SIZE];
static int top_element = -1; //始终是栈顶元素的下标值

void push(STACK_TYPE value) {
  assert(!is_full());
  top_element += 1;
  stack[top_element] = value;
}

void pop(void) {
  assert(!is_empty());
  top_element -= 1;
}

STACK_TYPE top(void) {
  assert(!is_empty());
  return stack[top_element];
}

int is_empty(void) {
  return top_element == -1;
}

int is_full(void) {
  return top_element == STACK_SIZE - 1;
}
