/*
 * =====================================================================================
 *
 *       Filename:  DDListNode.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年08月13日 14时09分26秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
#include "dlist.h"

//节点结构
typedef struct _DListNode{
  struct _DListNode * prior;
  struct _DListNode * next;
  int data;
}DListNode;

DListNode *init_DListNode(DListNode *head){
  //创建一个头结点，头指针为head
  head = (DListNode*)malloc(sizeof(DListNode));
  //对节点进行初始化
  head->prior = NULL;
  head->next = NULL;
  head->data = 0;
  //声明一个指向头结点的指针，方便后期向链表中添加创建的节点
  DListNode *list = head;
  for(int i=1; i<=5; i++){
    //创建新的节点并初始化
    DListNode *body = (DListNode*)malloc(sizeof(DListNode));
    body->prior = NULL;
    body->next = NULL;
    body->data = i;

    //新节点与链表最后一个节点建立关系
    list->next = body;
    if(i == 1){
      body->prior = NULL;
    }else{
      body->prior = list;
    }
    //list永远指向链表中最后一个节点
    list = list->next;
  }
  //返回新创建的链表
  return head;
}

DListNode *insert_node(DListNode *head, int data, int add){
  //新建数据域为data的节点
  DListNode *temp = (DListNode*)malloc(sizeof(DListNode));
  temp->data = data;
  temp->next = NULL;
  temp->prior = NULL;
  //插入到链表头，要特殊考虑
  if(add == 1){
    temp->next = head->next;
    temp->prior = head;
    head->next = temp;
  }else{
    DListNode * body = head->next;
    //找到插入位置的前一个节点
    for(int i=1; i<add-1; i++){
      body = body->next;
    }
    if(body->next == NULL){
      body->next = temp;
      temp->prior = body;
    }else{
      temp->next = body->next;
      body->next->prior = temp;
      body->next = temp;
      temp->prior = body;
    }
  }
  return head;
}

DListNode * del_node(DListNode *head, int data){
  DListNode * temp = head->next;
  //遍历链表
  while(temp){
    if(temp->data == data){
      if(temp->prior == NULL){
        head->next = temp->next;
        temp->next->prior = NULL;
      }else{
        temp->prior->next = temp->next;
        temp->next->prior = temp->prior;
        free(temp);
      }
      return head;
    }
    temp = temp->next;
  }
  printf("链表中无此元素");
  return head;
}

//head为原双链表，elem表示被查找元素
int select_elem(DListNode *head, int elem){
  //新建一个指针t,初始化为头指针head
  DListNode *t = head->next;
  int i = 1;
  while(t){
    if(t->data == elem){
      return i;
    }
    i++;
    t = t->next;
  }
  return -1;
}

//更新函数，add表示更改节点在双链表中的位置，newElem为新数据的值
DListNode *amend_elem(DListNode *p, int add, int newElem){
  DListNode * temp = p->next;
  //遍历到被删除节点
  for(int i = 0; i<add-1; i++){
    temp = temp->next;
  }
  temp->data = newElem;
  return p;
}

void display_DListNode(DListNode *head){
  DListNode *temp = head->next;
  while(temp){
    //如果该节点没有后继结点，说明此节点是链表的最后一个节点
    if(temp->next == NULL){
      printf("%d\n", temp->data);
    }else{
      printf("%d<->", temp->data);
    }
    temp = temp->next;
  }
}

int dlist_foreach(DListNode *head, DListVisitFunc visit, int *ctx) {
  DListNode *temp = head->next;
  int ret = 0;
  while (temp != NULL) {
    ret = visit(ctx, temp->data);
    temp = temp->next;
  }
  return ret;
}
