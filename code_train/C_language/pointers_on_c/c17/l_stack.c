/*
 * =====================================================================================
 *
 *       Filename:  l_stack.c
 *
 *    Description:  链表实现堆栈，没有长度限制
 *
 *        Version:  1.0
 *        Created:  2019年10月31日 10时54分24秒
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
#include <malloc.h>
#include <assert.h>

#define FALSE 0

typedef struct STACK_NODE {
  STACK_TYPE value;
  struct STACK_NODE *next;
}StackNode;

//指向堆栈中的第一个节点
stack StackNode *stack;

void create_stack(size_t size) {
}

void destroy_stack(void) {
  while(!is_empty())
    pop();
}

void push(STACK_TYPE value) {
  StackNode *new_node;

  new_node = malloc(sizeof(StackNode));
  assert(new_node != NULL);
  new_node->value = value;
  new_node->next = stack;
  stack = new_node;
}

void pop(void) {
  StackNode *first_node;

  assert(!is_empty());
  first_node = stack;
  stack = first_node->next;
  free(first_node);
}

int is_empty(void) {
  return stack == NULL;
}

int is_full(void){
  return FALSE;
}
