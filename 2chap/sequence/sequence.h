#ifndef  SENQUENCE_H
#define SENQUENCE_H

#include <stdio.h>
#include <stdlib.h>
#include "status.h"

#define LIST_INIT_SIZE 100
#define LISTINCREMENT 10

typedef int ElemType;

typedef struct{
	ElemType *elem;
	int length;
	int listsize;
}SqList;


Status InitList_Sq(SqList *L);
Status ListInsert_Sq(SqList *L,int i,ElemType e);
Status ListTraverse_Sq(SqList L,void(visit)(ElemType));
Status ListDelete_Sq(SqList *L,int i,ElemType *e);
#endif
