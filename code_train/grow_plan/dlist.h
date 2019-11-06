/*
 * =====================================================================================
 *
 *       Filename:  dlist.h
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年08月13日 16时05分23秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#ifndef DLIST_H
#define DLIST_H


struct _DListNode;
typedef struct _DListNode DListNode;

typedef int (*DListVisitFunc)(int *ctx, int data);

//双链表的创建函数
DListNode *init_DListNode(DListNode *head);

//输出双链表的函数
void display_DListNode(DListNode *head);

//双向链表插入元素，add表示插入位置
DListNode *insert_DListNode(DListNode *head, int data, int add);

//双向链表删除指定元素
DListNode *del_DListNode(DListNode *head, int data);

//双向链表中查找指定元素
int select_elem(DListNode *head, int elem);

//双向链表中更改指定位置节点中存储的数据，add表示更改位置
DListNode *amend_elem(DListNode *p, int add, int newElem);

//遍历链表并且在遍历使用对应的函数指针来执行相应的操作
int dlist_foreach(DListNode *head, DListVisitFunc visit, int *ctx);

#endif
