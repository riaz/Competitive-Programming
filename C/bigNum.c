#include<stdio.h>

int main(){
	unsigned int i;
	long long sum = 1;//21*22*23*24*25*26;
	for(i=21;i<501;i++){
		sum= (sum*i)%1000000007;
	}
	printf("%lld",sum);	
	return 0;
}
