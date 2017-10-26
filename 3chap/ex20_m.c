#include <stdio.h>
#include "status.h"
#define LMAX 7
#define VMAX 9
#include "ex20.c"
Status ex20(int g[LMAX][VMAX],int state[LMAX][VMAX],int,int,int,int);

int main(){
	int g[LMAX][VMAX]={
		0,1,2,1,7,5,8,4,9,
		2,3,4,2,6,4,8,4,5,
		2,3,4,9,3,3,3,0,2,
		6,7,4,0,2,3,5,3,2,
		5,0,3,3,3,3,3,2,6,
		2,3,4,3,6,4,8,4,5,
		2,3,4,9,7,3,3,0,2,
	};
	int colnow;
	int i,j;
	int state[LMAX][VMAX];
	for(i=0;i<LMAX;i++){
		for(j=0;j<VMAX;j++)
			state[i][j]=0;
	}//表示是否访问过的数组初始化

	printf("before\n");
	for(i=0;i<LMAX;i++){
		for(j=0;j<VMAX;j++){
			printf("%d",g[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	printf("input (i,j):");scanf("%d,%d",&i,&j);
	printf("input wanted color(0~9):");scanf("%d",&colnow);
	ex20(g,state,i-1,j-1,g[i-1][j-1],colnow);
	printf("now:\n");
	for(i=0;i<LMAX;i++){
		for(j=0;j<VMAX;j++){
			printf("%d",g[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
