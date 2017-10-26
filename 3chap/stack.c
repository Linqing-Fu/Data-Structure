#ifndef STACK_C
#define STACK_C 


#include "stack.h"

Status InitStack(SqStack *S){
	S->base=(SElemType *)malloc(STACK_INIT_SIZE*sizeof(SElemType));
	if(!S->base)exit(OVERFLOW);
	S->top=S->base;
	S->stacksize=STACK_INIT_SIZE;
	return OK;
}

Status Push(SqStack *S,SElemType e){
	if((S->top)-(S->base)>=(S->stacksize)){
		S->base=(SElemType *)realloc(S->base,(S->stacksize+STACKINCREMENT)*sizeof(SElemType));
		if(!S->base)exit(OVERFLOW);
		S->top=S->base+S->stacksize;
		S->stacksize+=STACKINCREMENT;
	}
	*(S->top)=e;
	(S->top)++;
	return OK;
}

Status Pop(SqStack *S,SElemType *e){
	if(S->top==S->base)return ERROR;
	(S->top)--;
	*e=*((*S).top);
	return OK;
}

Status StacKEmpty(SqStack S){
	if(S.top==S.base){
		return ERROR;
	} else {
		return OK;
	}
}

Status GetTop(SqStack S,SElemType *e){
	if(S.top==S.base)return ERROR;
	e=*(S.top-1);
	return OK;
}

#endif
