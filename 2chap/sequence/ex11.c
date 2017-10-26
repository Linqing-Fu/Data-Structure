Status ex11(SqList *va,ElemType x){
	int i;
	ElemType *newbase;
	if(!(*va).length)return ERROR;
	if((*va).length>=(*va).listsize){
		newbase=(ElemType *)realloc((*va).elem,((*va).listsize+LISTINCREMENT)*sizeof(ElemType));
		if(!newbase)exit(OVERFLOW);
	(*va).elem=newbase;
	(*va).listsize+=LISTINCREMENT;
	}
	for(i=((*va).length)-1;i>=0;i--){
		if((*va).elem[i]>x)
			(*va).elem[i+1]=(*va).elem[i];
		else
			break;
	}
	(*va).elem[i+1]=x;
	++(*va).length;
	return OK;
}
