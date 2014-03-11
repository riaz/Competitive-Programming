#include <stdio.h>
#include <stdbool.h>

 bool reverser(int num){
 	int temp = num;
	int num_t=0;
	while(num>0){
		num_t= num_t*10+num%10;
		num/=10;
	}
	if(temp == num_t)
		return true;
	else
		return false;
}

int main(){
	int N,i,j;
	bool arr[1010000]; 
	arr[1] = 0; 
	for(i=2;i<1010000;i++)arr[i] = 1; 
	for(i=2;i<1010000/2;i++){
		for(j=2;j<=1010000/i;j++){
			arr[i*j] = 0;
		}
	}
	scanf("%d",&N);
	if(N%2==0)i=N+1;
	else i=N;
	for(;i<1010000;i+=2){
		if(arr[i] && reverser(i)){
			printf("%d\n",i);
			break;
		}
	}
	return 0;
}
