#ifndef POLYLINK_C
#define POLYLINK_C

#include "polylink.h"

Status InitPoly(LinkedPoly *L){
	(*L)=(LinkedPoly)malloc(sizeof(PolyNode));
	if(!(*L))exit(OVERFLOW);
	(*L)->next=(*L);
	return OK;

}

Status CreatPoly(LinkedPoly *P,int n,PolyTerm data[]){
	int i;
	LinkedPoly s,r;
	*P=(LinkedPoly)malloc(sizeof(PolyNode));
	if(!(*P))exit(OVERFLOW);
	(*P)->next=*P;
	for(i=0,r=*P;i<n;i++){
		s=(LinkedPoly)malloc(sizeof(PolyNode));
		if(!s)exit(OVERFLOW);
		s->data=data[i];
		s->next=r->next;
		r->next=s;
		r=r->next;
	}
	return OK;
}

Status OutputPoly(LinkedPoly P){
	int i;
	LinkedPoly r;
	if(!P)
		return ERROR;
	for(r=P->next;r!=P;r=r->next){
		if(r==P->next)
			printf("%d",r->data.coef);
		else{
			if(r->data.coef<0){
				printf("-");
				printf("%d",-(r->data.coef));
			}
			else{
				printf("+");
				printf("%d",r->data.coef);
			}
		}
		if(r->data.exp){
			printf("x");
			if(r->data.exp!=1)
				printf("^%d",r->data.exp);
		}
	}
	return OK;
}



#endif