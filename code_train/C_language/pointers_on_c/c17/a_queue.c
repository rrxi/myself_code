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
#include <assert.h>

#define QUEUE_SIZE 100
#define ARRAY_SIZE (QUEUE_SIZE + 1)

static QUEUE_TYPE queue[ARRAY_SIZE];
static size_t front = 1;
static size_t rear = 0;

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
  return (rear + 1) % ARRAY_SIZE == front;
}

int is_full(void) {
  return (rear + 2) % ARRAY_SIZE == front;
}