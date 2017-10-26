#include "sequence.c"
#include "ex12.c"
void PrintElem(ElemType e);
int ex12(SqList,SqList);

int main(){
	int i,result;
	SqList A,B;
	InitList_Sq(&A);
	InitList_Sq(&B);
	ElemType a[5]={1,3,5,7,2};
	ElemType b[7]={1,3,5,7,2,1,6};

	for(i=1;i<=5;i++)
		ListInsert_Sq(&A,i,a[i-1]);
	for(i=1;i<=7;i++)
		ListInsert_Sq(&B,i,b[i-1]);
	printf("A:\n");ListTraverse_Sq(A,PrintElem);printf("\n");
	printf("B:\n");ListTraverse_Sq(B,PrintElem);printf("\n");
	result=ex12(A,B);
	if(result==1)
		printf("A is bigger than B\n");
	else if(result==-1)
		printf("B is bigger than A\n");
	else
		printf("A==B\n");
	return 0;
}

void PrintElem(ElemType e){
    printf("%d  ",e);
}
