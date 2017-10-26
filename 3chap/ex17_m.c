#include "stack_17.c"
#include "ex17.c"
Status ex17();

int main(){
    int state;
    state=ex17();
    if(state==0)
	printf("error:not fit\n");
    else if(state==1)
	printf("accept\n");
    return 0;
}
