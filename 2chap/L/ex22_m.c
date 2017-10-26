#include "linkedlist.c"
#include "ex22.c"

Status ex22(LinkList);
void PrintElem(ElemType);

int main(){
	int i;
	LinkList L;
	InitList_L(&L);
	for(i=1;i<10;i++){
		ListInsert_L(L,i,3*i-1);
	}
	printf("initial:\n");
	ListTraverse_L(L,PrintElem);
	printf("\n");
	ex22(L);
	printf("after:\n");
	ListTraverse_L(L,PrintElem);
	printf("\n");
	return 0;
}


void PrintElem(ElemType e){
	printf("%d ",e);
}
