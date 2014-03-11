#include <stdio.h>

int main(void){
	int T;	
	long double a,xha,xhb,xhc;
	long double area;
	long double hg;
	scanf("%d",&T);
	while(T--){
		scanf("%Lf%Lf%Lf%Lf",&a,&xha,&xhb,&xhc);
		area = 1.5 * a * xha;
		printf("%.3Lf\n",area);
	}
	return 0;
}

