Status ex21(){
	SElemType GetTop(SqStack);
	Status In(char,char *);
	char Precede(char a,char b);
	SqStack OPTR;
	char c,e;
	char OP[]={'(',')','+','-','*','/','#'};
	InitStack(&OPTR);//寄存运算符
	Push(&OPTR,'#');
	c=getchar();
	while(c!='#'||GetTop(OPTR)!='#'){
		if(isalpha(c)){printf("%c ",c);c=getchar();}
		else
			switch(Precede(GetTop(OPTR),c)){
				case '<':Push(&OPTR,c);c=getchar();break;
				case '>':Pop(&OPTR,&e);printf("%c ",e);/*Push(&OPTR,c);c=getchar();*/break;
				case '=':Pop(&OPTR,&e);c=getchar();break;
				default:printf("error:synax wrong\n");return ERROR;
			}
	}
	printf("\n");
	return OK;

}

Status In(char a,char *b){
	int i;
	for(i=0;i<=7;i++){
		if(a==b[i])
			return YES;
	}
	return NO;
}

SElemType GetTop(SqStack S){
	SElemType e;
	if(S.top==S.base)return ERROR;
	e=*(S.top-1);
	return e;
}

char Precede(char a,char b){
	int Transfer(char a);
	char calcu[7][7]={
		'>','>','<','<','<','>','>',
		'>','>','<','<','<','>','>',
		'>','>','>','>','<','>','>',
		'>','>','>','>','<','>','>',
		'<','<','<','<','<','=',' ',
		'>','>','>','>',' ','>','>',
		'<','<','<','<','<',' ','=',
	};
	return calcu[Transfer(a)][Transfer(b)];
}

int Transfer(char a){
	switch(a){
		case '+':return 0;
		case '-':return 1;
		case '*':return 2;
		case '/':return 3;
		case '(':return 4;
		case ')':return 5;
		case '#':return 6;
	}
}
