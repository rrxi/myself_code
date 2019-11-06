/*
 * =====================================================================================
 *
 *       Filename:  queue.h
 *
 *    Description:  队列模块接口
 *
 *        Version:  1.0
 *        Created:  2019年10月31日 11时10分35秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */

#include <stdlib.h>

#define QUEUE_TYPE int

void create_queue(size_t size);

void destroy_queue(void);

void insert(QUEUE_TYPE value);

void delete(void);

QUEUE_TYPE first(void);

int is_empty(void);

int is_full(void);

