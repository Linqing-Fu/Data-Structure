Status ex19(LinkList L,int mink,int maxk){
	LinkList first,p,i;
	if(mink>=maxk)return ERROR;
	if(!L||!L->next)return ERROR;
	i=L->next;
    while(i&&((i->data)<maxk)){
		if(i->data<=mink){
			first=i;
			i=i->next;
		}
		else{
			first->next=i->next;
			p=i;
			i=i->next;
			free(p);
		}
	}
	return OK;
}