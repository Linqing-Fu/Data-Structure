Status ex17(){
	SElemType a,b;
	SqStack S;
	int state;
	InitStack(&S);
	printf("input:");
	while((a=getchar())!='&'&&a!=EOF){
		Push(&S,a);
	}
	while((a=getchar())!='@'&&(S.base!=S.top)&&a!=EOF){
		Pop(&S,&b);
		if(a!=b)
		    return ERROR;
	}
	if(a=='@'&&(S.base==S.top))
		return OK;
	else
		return ERROR;
}
