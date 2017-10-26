#ifndef LINKEDLIST_C
#define LINKEDLIST_C

#include "linkedlist.h"

Status InitList_L(LinkList *L){
	(*L)=(LinkList)malloc(sizeof(LNode));
	if(!(*L))
		exit(OVERFLOW);
	(*L)->next=NULL;
	return OK;
}

Status ListInsert_L(LinkList L,int i,ElemType e){
	LinkList p,s;
	int j=0;
	p=L;
	while(p&&j<i-1){
		p=p->next;
		++j;
	}
	if(!p||j>i-1)return ERROR;
	s=(LinkList)malloc(sizeof(LNode));
	s->data=e;s->next=p->next;p->next=s;
	return OK;
}

Status ListTraverse_L(LinkList L,void(Visit)(ElemType)){
	LinkList p;
	if(!L){
		return ERROR;
	}
	else
		p=L->next;

	while(p){
		Visit(p->data);
		p=p->next;
    }
    return OK;
}

#endif

