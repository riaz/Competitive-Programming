#include<stdio.h>

main(){
	unsigned int n,k,num;
	unsigned int count=0;
	scanf("%u%u",&n,&k);
	while(n--){
		scanf("%u",&num);
		if(num%k==0)count++;
	}
	printf("%u\n",count);
	return 0;
}

