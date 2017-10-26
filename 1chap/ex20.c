#include<stdio.h>
#define MAXLENGTH 20
int ex20(int,int,int*);

int main(){
	int i,n;
	int x,result;
	int a[MAXLENGTH];
	printf("input n:");scanf("%d",&n);
	if(n>MAXLENGTH){
	    printf("error:%d bigger than MAXLENGTH\n",n);
	    return 0;
	}
	printf("input x:");scanf("%d",&x);
	printf("input series of a:\n");
	for(i=0;i<=n;i++){
		scanf("%d",&a[i]);
	}
	printf("P(%d) is %d\n",x,ex20(n,x,a));
}

int ex20(int n,int x,int *a){
	int result;
	int i;
	result=a[0];
	for(i=1;i<=n;i++){
		result=result+x*a[i];
		x=x*x;
	}
	return result;
}
