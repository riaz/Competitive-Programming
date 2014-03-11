#include <stdio.h>
#define MOD 1000000007
#define MAX 1000000    //This is the maximum number of steps that are possible

unsigned long long int fib[MAX];
int main(){

	int T,i;
	int num,g,count;
	unsigned int temp;
	//Pre-computing the factorial of respective values	
	fib[0] = 1;
	fib[1] = 2;
	for(i=2;i<MAX;i++){
		fib[i] = fib[i-1] + fib[i-2];
		if(fib[i]>=MOD)
			fib[i]-=MOD;
	}
	scanf("%d",&T);
	while(T--){		
		scanf("%d %d",&num,&g);
		temp = fib[num-1];
		count = 0;
		while(temp>0){
			if(temp&1)count++;
			temp>>=1;
		}
		if(count==g)
			printf("CORRECT\n");
		else
			printf("INCORRECT\n");		
	}
	return 0;
}
