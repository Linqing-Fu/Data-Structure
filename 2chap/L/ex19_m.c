#include "linkedlist.c"
#include "ex19.c"

Status ex19(LinkList,int,int);
void PrintElem(ElemType);

int main(){
	int i,max,min;
	LinkList L;
	printf("input min:");scanf("%d",&min);
	printf("input max:");scanf("%d",&max);
	InitList_L(&L);
	for(i=1;i<10;i++)
		ListInsert_L(L,i,2*i-1);
	printf("initial:\n");
	ListTraverse_L(L,PrintElem);
	printf("\n");
	ex19(L,min,max);
	printf("after:\n");
	ListTraverse_L(L,PrintElem);
	printf("\n");
	return 0;
}

void PrintElem(ElemType e){
    printf("%d ",e);
}
