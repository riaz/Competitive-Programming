#include<stdio.h>

main(void){
	long a=0,b=1;	
	long long sum=0;
	printf("%ld\n%ld\n",a,b);
	while((a+b)<20){
		b=a+b;
		sum+=b;
		//printf("%ld\n",b);		
		a=b-a;
	}
	printf("%ld\n",sum);			
	return 0;
}
