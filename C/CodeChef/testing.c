//test.c
#include <stdio.h>
#include <math.h>

int main(){
	int j=0;
	int N = (int)pow(2.0,5);
	printf("%d",N);
	j=(j%1000000009+(int)pow(2.0,N-1)%1000000009)%1000000009;
	printf("%d\n",j);
	return 0;
}

