/*J7*/
#include <stdio.h>
#include <math.h>

int main(){
	int T,P,S;
	double a,b;
	scanf("%d",&T);
	while(T--){
		scanf("%d%d",&P,&S);
		a = sqrt(P*P - 24 * S);
		a = (P - a)/12.0;
		b = P/4.0 - 2*a;
		printf("%.2lf\n",a*a*b);
	}
	return 0;
}
