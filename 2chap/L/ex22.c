Status ex22(LinkList L){
	LinkList head,current,p;
	if(!L||!(L->next))
		return ERROR;
	p=L->next;
	head=NULL;
	while(p->next){
		current=p->next;
		p->next=head;
		head=p;
		p=current;
	}
	p->next=head;
	L->next=p;
	return OK;

}