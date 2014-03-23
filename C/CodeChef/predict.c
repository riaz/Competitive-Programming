/* PREDICT.c*/
#include <stdio.h>

int main(){
	int T;
	double p,sum;
	scanf("%d",&T);
	while(T--){
		scanf("%lf",&p);
		if(p<0.5)
			p = 1-p;
		sum = 10000.0 + 10000.0*p*(1-p)*2 - 10000.0*(1-p);
		printf("%.6lf\n",sum);
	}
}
