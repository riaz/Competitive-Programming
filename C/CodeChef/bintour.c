//bintour.c
#include <stdio.h>
#include <math.h>
#define SIZE 1048576

int main(){
	int K,i,j;
	int N;
	int arr[SIZE];
	scanf("%d",&K);
	N = (int)pow(2.0,K);
	if(N==2){ printf("2\n2\n");}
	else{	j=0;
		arr[0] = 1;
		for(i=1;i<N;i++){
			arr[i] = (2*arr[i-1])%1000000009;
		}
		for(i=0;i<N;i++){
			printf("%d\n",j);			
			j=(j+arr[N-1])%1000000009;			
		}
	}
	return 0;
}
