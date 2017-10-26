int ex12(SqList A,SqList B){
	int i;
	for(i=0;i<A.length&&i<B.length;i++){
		if(A.elem[i]>B.elem[i])
			return 1;
		else if(A.elem[i]<B.elem[i])
			return -1;
	}
	if(i<A.length)
		return 1;
	else if(i<B.length)
		return -1;
	else 
		return 0;
}
