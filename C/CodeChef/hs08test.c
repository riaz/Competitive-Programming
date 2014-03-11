#include<stdio.h>
#define CHARGE 0.5

main(){
	int sum;
	float bal;
	scanf("%d%f",&sum,&bal);
	//( (sum%5==0) &&  (float)(sum+CHARGE > bal))
	if(sum%5!=0 || ( (sum%5==0) &&  (float)(sum+CHARGE > bal)))
		printf("%.2f",bal);
	else
		printf("%.2f",bal-(float)(sum+CHARGE));	
	return 0;
}
