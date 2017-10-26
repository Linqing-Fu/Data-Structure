#ifndef LINKEDLIST_H
#define LINKEDLIST_H 

#include <stdio.h>
#include <stdlib.h>
#include "status.h"

typedef int ElemType;

typedef struct LNode{
	ElemType data;
	struct LNode* next;
}LNode;
typedef LNode* LinkList;

Status InitList_L(LinkList *L);
Status ClearList_L(LinkList L);
void DestroyList_L(LinkList *L);
Status ListEmpty_L(LinkList L);
int ListLength_L(LinkList L);
Status GetElem_L(LinkList L,int i,ElemType *e);
int LocateElem_L(LinkList L,ElemType e,Status(Compare)(ElemType,ElemType));
Status PriorElem_L(LinkList L,ElemType cur_e,ElemType *pre_e);
Status NextElem_L(LinkList L,ElemType cur_e,ElemType *next_e);
Status ListInsert_L(LinkList L,int i,ElemType e);
Status ListDelete_l(LinkList L,int i,ElemType *e);
Status ListTraverse_L(LinkList L,void(Visit)(ElemType));

#endif
