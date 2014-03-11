#include<stdio.h>
#include<stdlib.h>



int main(){
	int N,K,*arr,i=0,j,l,min;
	scanf("%d%d\n",&N,&K);

	arr = (int*)malloc(N*sizeof(int));
	for(;i<N;i++)
		scanf("%d",arr+i);

	min = 9999999;		
	for(i=0;i<N/2;i++){
		for(j=0;j<N;j++){
			if((arr[i]+arr[j])==K){
				if((i+j)<min)min = i+j;
			}
		}
	}
	if(min!=9999999)
		printf("%d\n",min);
	else
		printf("-1\n");
	return 0;
}
