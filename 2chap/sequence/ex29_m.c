#include "sequence.c"
#include "ex29.c"
Status ex29(SqList*,SqList*,SqList*);
void PrintElem(ElemType e);

int main(){
	SqList A,B,C;
	int i;
	int a[]={2,3,3,3,7,9,9,11};
	int b[]={2,3,3,3,5,8,9,11};
	int c[]={2,3,3,6,7,10,10,11};
	if(InitList_Sq(&A)&&InitList_Sq(&B)&&InitList_Sq(&C)){
		for(i=1;i<=8;i++){
			ListInsert_Sq(&A,i,a[i-1]);
			ListInsert_Sq(&B,i,b[i-1]);
			ListInsert_Sq(&C,i,c[i-1]);
		}
	}
	printf("A:\n");ListTraverse_Sq(A,PrintElem);printf("\n");
	printf("B:\n");ListTraverse_Sq(B,PrintElem);printf("\n");
	printf("C:\n");ListTraverse_Sq(C,PrintElem);printf("\n");
	ex29(&A,&B,&C);
	printf("after:\n");
	printf("A:\n");ListTraverse_Sq(A,PrintElem);printf("\n");
	printf("B:\n");ListTraverse_Sq(B,PrintElem);printf("\n");
	printf("C:\n");ListTraverse_Sq(C,PrintElem);printf("\n");
	return 0;
}



void PrintElem(ElemType e){
    printf("%d  ",e);
}
