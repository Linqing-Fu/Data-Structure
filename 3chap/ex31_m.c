#include "stack_17.c"
#include "ex31.c"
#define MAXLINE 100
Status ex31(char*);

int main(){
	char a[MAXLINE];
	scanf("%s",a);
	if(ex31(a)==1)
		printf("accept:is palindrome\n");
	else
		printf("reject:isn't palindrome\n");
}
