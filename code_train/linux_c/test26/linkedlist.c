/*
 * =====================================================================================
 *
 *       Filename:  linkedlist.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年06月21日 16时50分44秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include "linkedlist.h"
#include <stdio.h>

LinkedList LinkedListInit()
{
  Node *L;
  L = (Node *)malloc(sizeof(Node));
  if(L == NULL)
    printf("reply memory failed.\n");
  L->next = NULL;
}

LinkedList LinkedListCreatH()
{
  Node *L;
  L = (Node *)malloc(sizeof(Node));
  L->next = NULL;

  ElemType x;
  while(scanf("%d",&x)!=EOF)
  {
    Node *p;
    p = (Node *)malloc(sizeof(Node));
    p->data = x;
    p->next = L->next;
    L->next = p;
  }
  return L;
}

LinkedList LinkedListCreatT()
{
  Node *L;
  L = (Node *)malloc(sizeof(Node));
  L->next = NULL;
  Node *r;
  r = L;
  ElemType x;
  while(scanf("%d", &x)!=EOF)
  {
    Node *p;
    p = (Node *)malloc(sizeof(Node));
    p->data = x;
    r->next = p;
    r = p;
  }
  r->next = NULL;
  return L;
}

LinkedList LinkedListInsert(LinkedList L, int i, ElemType x)
{
  Node *pre;
  pre = L;
  int tempi = 0;
  for(tempi = 1; tempi < i; tempi++)
    pre = pre->next;
  Node *p;
  p = (Node *)malloc(sizeof(Node));
  p->data = x;
  p->next = pre->next;
  pre->next = p;

  return L;
}

LinkedList LinkedListDelete(LinkedList L, ElemType x)
{
  Node *p, *pre;
  p = L->next;
  while(p->data != x)
  {
    pre = p;
    p = p->next;
  }
  pre->next = p->next;
  free(p);
  return L;
}

