Status ex29(SqList *A,SqList *B,SqList *C){
	void PrintElem(ElemType e);
	ElemType *pa,*pb,*pb_last,*pc,*pc_last;
	ElemType e;
	SqList temp;
	int i;
	i=0;
	pb=B->elem;pc=C->elem;pa=A->elem;
	pb_last=B->elem+B->length-1;
	pc_last=C->elem+C->length-1;
	InitList_Sq(&temp);
	while(pb<=pb_last&&pc<=pc_last){
		if(*pb==*pc){
			ListInsert_Sq(&temp,i,*pb);
			i++;pb++;pc++;
		}
		else if(*pb<*pc)
			pb++;
		else
			pc++;
	}//将相同元素存入线性表temp中
	//printf("temp:\n");ListTraverse_Sq(temp,PrintElem);
	pb=temp.elem;pb_last=temp.elem+temp.length-1;
	while(pa<=A->elem+A->length-1&&pb<=pb_last){//注意:此处由于顺序列删除元素自动向前移一位,限制条件需要不断更新
		if(*pa==*pb){
			ListDelete_Sq(A,pa+1-(A->elem),&e);
		}//考虑到A中会有重复元素的删除法,且删除后元素自动向前移,故指针不需动
		else if(*pa>*pb)
			pb++;
		else
			pa++;
	}
	return OK;
}