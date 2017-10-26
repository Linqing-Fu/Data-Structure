#include "sequence.c"
#include "ex11.c"
Status ex11(SqList*,ElemType);
void PrintElem(ElemType e);

int main(){
    SqList va;
    int i;
    ElemType n;
    if(InitList_Sq(&va)){
    	for(i=1;i<=10;i++)
    		ListInsert_Sq(&va,i,2*i);
    }
    ListTraverse_Sq(va,PrintElem);
    printf("\n");

    printf("input an element:");
    scanf("%d",&n);
    ex11(&va,n);
    printf("now L:\n");
    ListTraverse_Sq(va,PrintElem);
    printf("\n");
    return 0;
}

void PrintElem(ElemType e){
    printf("%d ",e);
}
