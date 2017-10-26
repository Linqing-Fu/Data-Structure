void test(){
	SElemType e,x;
	SqStack S;
	int result;
	InitStack(&S);
	scanf("%d",&x);
	while(x!=0){
		Push(&S,x);
		scanf("%d",&x);
	}
	result=0;
	printf("%d\n",result);
	while(Pop(&S,&e)){
	    result+=e;
	    printf("%d",result);
	}
}
