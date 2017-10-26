#include<stdio.h>
int main(){
	int X,Y,Z;
	void ex16(int,int,int);
	scanf("%d,%d,%d",&X,&Y,&Z);
	ex16(X,Y,Z);
}

void ex16(int X,int Y,int Z){
	int max,min,mid;
	if(X>Y){
		if(X>Z){
			max=X;min=(Y>Z)?Z:Y;mid=(Y>Z)?Y:Z;
		}
		else{
			max=Z;mid=X;min=Y;
		}
	}
	else if(Y>Z){
		max=Y;min=(X>Z)?Z:X;mid=(X>Z)?X:Z;
	}
	else{
		max=Z;min=X;mid=Y;
	}
	printf("%d %d %d\n",max,mid,min);
}