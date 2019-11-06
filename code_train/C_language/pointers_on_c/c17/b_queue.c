/*
 * =====================================================================================
 *
 *       Filename:  a_queue.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年10月31日 11时25分37秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */

#include "queue.h"
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <assert.h>

static QUEUE_TYPE *queue;
static size_t queue_size;
static size_t array_size;
static size_t front = 1;
static size_t rear = 0;

void create_queue(size_t size) {
  assert(size);
  queue_size = size;
  array_size = size + 1;
  queue = malloc(array_size * sizeof(QUEUE_TYPE));
  assert(queue != NULL);
}

void destroy_queue(void) {
  assert(array_size > 0);
  array_size = 0;
  free(queue);
  queue = NULL;
}

void insert(QUEUE_TYPE value) {
  assert(!is_full());
  rear = (rear + 1) % ARRAY_SIZE;
  queue[rear] = value;
}

void delete(void) {
  assert(!is_empty());
  front = (front+1) % ARRAY_SIZE;
}

QUEUE_TYPE first(void) {
  assert(!is_empty());
  return queue[front];
}

int is_empty(void) {
  assert(array_size > 0);
  return (rear + 1) % ARRAY_SIZE == front;
}

int is_full(void) {
  assert(array_size > 0);
  return (rear + 2) % ARRAY_SIZE == front;
}
