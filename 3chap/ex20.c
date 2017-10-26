Status ex20(int g[LMAX][VMAX],int state[LMAX][VMAX],int i,int j,int colpre,int colnow){
	void Transfer(int,int *,int *);
	void makeprint(int state[LMAX][VMAX],int,int);
	int t,a,b;
	if(state[i][j]==1)
		return 0;//已经到达过
	if(g[i][j]!=colpre||i>=LMAX||i<0||j>=VMAX||j<0){
		makeprint(state,i,j);
		return 0;
	}
	else{
		makeprint(state,i,j);
		for(t=1;t<=4;t++){
			Transfer(t,&a,&b);
			ex20(g,state,i+a,j+b,colpre,colnow);
		}
	}
	g[i][j]=colnow;
	return OK;
}


void Transfer(int i,int *a,int *b){
	switch(i){
		case 1:*a=0;*b=1;break;
		case 2:*a=1;*b=0;break;
		case 3:*a=0;*b=-1;break;
		case 4:*a=-1;*b=0;break;
	}
}

void makeprint(int state[LMAX][VMAX],int i,int j){
	state[i][j]=1;
}
