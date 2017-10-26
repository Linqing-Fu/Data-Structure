Status ex41(LinkedPoly L){
	LinkedPoly p,pre;
	if(!L)
		return ERROR;
	pre=L;
	p=L->next;
	while(p!=L){
		if((p->data).exp>0){
			(p->data).coef*=(p->data).exp;
			(p->data).exp--;
			p=p->next;
			pre=pre->next;
		}
		else{
			pre->next=p->next;
			free(p);
			p=pre->next;
		}
	}
	return OK; 
}