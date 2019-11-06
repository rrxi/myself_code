/*
 * =====================================================================================
 *
 *       Filename:  a_stack.c
 *
 *    Description:  动态数组实现堆栈
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
#include <stdio.h>
#include <assert.h>
#include <malloc.h>

static STACK_TYPE *stack;
static size_t stack_size;
static int top_element = -1; //始终是栈顶元素的下标值

void create_stack(size_t size) {
  assert(stack_size == 0);
  stack_size = size;
  stack = malloc(stack_size * sizeof(STACK_TYPE));
  assert(stack != NULL);
}

void destroy_stack(void) {
  assert(stack_size > 0);
  stack_size = 0;
  free(stack);
  stack = NULL;
}

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
  assert(stack_size > 0);
  return top_element == -1;
}

int is_full(void) {
  assert(stack_size > 0);
  return top_element == STACK_SIZE - 1;
}
