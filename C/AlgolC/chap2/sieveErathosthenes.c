#include <stdio.h>
#include <stdbool.h>

#define N 1000

int main(){
	int i,j;
	bool arr[N+1]; //because we use only 1 to N , 0 is left off
	arr[1] = 0; //neither prime nor composite,0 meaning not prime in context
	for(i=2;i<N;i++)arr[i] = 1; //making all prime by default by marking 1
	for(i=2;i<N/2;i++){
		for(j=2;j<=N/i;j++){
			arr[i*j] = 0;
		}
	}	
	for(i=1;i<=N;i++){
		if(arr[i])printf("%4d",i);
	}
	return 0;
}
