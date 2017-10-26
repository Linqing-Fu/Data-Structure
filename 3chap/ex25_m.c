#include<stdio.h>
//#include "ex25.c"
int ex25(int);

int main(){
    int n;
    int result;
    scanf("%d",&n);
    if(n<0){
	printf("error:wrong input\n");
	return 0;
    }
    result=ex25(n);
    printf("the result of F(%d) is %d\n",n,result);
}
