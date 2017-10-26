int ex25(int n){
    int result;
    if(n==0)
	return n+1;
    else if(n>0)
	result=n*ex25(n/2);
    return result;
}
