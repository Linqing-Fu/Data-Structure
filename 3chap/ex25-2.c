int ex25(int n){
	int result;
	result=1;
	while(n>0){
		result*=n;
		n/=2;
	}
	return result;
}
