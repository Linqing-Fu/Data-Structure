Status ex31(char *a){
	int i;
	SqStack S;
	char e;
	InitStack(&S);
	for(i=0;a[i]!='@';i++)
		Push(&S,a[i]);//序列入栈
	for(i=0;a[i]!='@';i++){
		Pop(&S,&e);
		if(e!=a[i])
			return ERROR;
	}
	if(Pop(&S,&e)==0&&a[i]=='@')
		return OK;
	else
		return ERROR;
	

}
