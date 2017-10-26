#include "polylink.c"
#include "ex41.c"

Status ex41(LinkedPoly);

int main(){
	LinkedPoly L;
	PolyTerm a[7]={-2,1,2,2,54,8,3,63,-9,-3,5,4,3,5};
	CreatPoly(&L,7,a);
	printf("P(x)=");
	OutputPoly(L);
	printf("\n");
	ex41(L);
	printf("P'(x)=");
	OutputPoly(L);
	printf("\n");
}
