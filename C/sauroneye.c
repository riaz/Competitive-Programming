#include <stdio.h>
 
long long calx(long long n){
	if(n<1){
		return 0;
	}
	if(n==1){
		return 1;
	}
	else{
		return((3*calx(n-1)%1000000007 - calx(n-2)%1000000007)%1000000007);	
	}
}
 
int main(void) {
	int T;
	long long num;
	scanf("%d",&T);
	while(T--){
		scanf("%lld",&num);
		// printf("%llu",num);
		printf("%lld\n",calx(num)%1000000007);
	}
	return 0;
}
