/*
 * =====================================================================================
 *
 *       Filename:  linkedlist.h
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年06月21日 16时45分57秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef int ElemType;

typedef struct Node {
  ElemType data;
  struct Node *next;
}Node, *LinkedList;

LinkedList LinkedListInit();
LinkedList LinkedListCreatH();
LinkedList LinkedListCreatY();
LinkedList LinkedListInsert(LinkedList L, int i, ElemType x);
LinkedList LinkedListDelete(LinkedList L, ElemType x);

#endif
