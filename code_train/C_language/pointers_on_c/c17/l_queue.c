/*
 * =====================================================================================
 *
 *       Filename:  l_queue.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年10月31日 13时52分15秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */

#include "queue.h"
#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>
#include <assert.h>

#define FALSE 0

typedef struct QUEUE_NODE {
  QUEUE_TYPE value;
  struct QUEUE_NODE *next;
}QueueNode;

static QueueNode *front;
static QueueNode *rear;

void create_queue(size_t size) {
  //not need
}

void destroy_queue(void) {
  while(!is_empty())
    delete();
}

void insert(QUEUE_TYPE value) {
  QueueNode *new_node;

  new_node = malloc(sizeof(QueueNode));
  assert(new_node != NULL);
  new_node->value = vlaue;
  new_node->next = rear;
  rear = new_node;
}

void delete(void) {
  QueueNode *first_node;

  assert(!is_empty());
  frist_node = front;
  front = front->next;
  free(first_node);
}

QUEUE_TYPE first(void) {
  assert(!is_empty());
  return front->value;
}

int is_empty(void) {
  return (front == NULL || rear == NULL);
}

int is_full(void) {
  return FALSE;
}
