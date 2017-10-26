#include <stdio.h>
#define MAXINT 100000
#define arrisize 8

int main(){
	int ex19(int*,int);
	int a[arrisize];
	int i,n,t;
	for(i=0;i<arrisize;i++);
		a[i]=0;
	scanf("%d",&n);
	if((t=ex19(a,n))>0){
		for(i=0;i<=t;i++)
			printf("%d\n",a[i]);
	}	
}

int ex19(int *a,int n){
	int i,j;
	if(n<=0||n>arrisize){
		printf("error input:n is supposed to be 1~arrisize\n");
		return -1;
	}
	a[0]=1;
	for(i=1;i<=n;i++){
		a[i]=a[i-1]*(2*i);
		if(a[i]>MAXINT/(2*(i+1))){
			printf("error:when i=%d k!*2^k>MAXINT\n",i+1);
			break;
		}
	}
	return i-1;
}