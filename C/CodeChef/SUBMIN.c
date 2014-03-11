#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(){
	int N,*arr,i=0,j,k,Q,*query,count;
	bool contain;
	int min;
	scanf("%d",&N);
	arr = (int*)malloc(N*sizeof(int));
	for(;i<N;i++)
		scanf("%d",&arr[i]);

	scanf("%d",&Q);
	query = (int*)malloc(Q*sizeof(int));	
	for(i=0;i<Q;i++)
		scanf("%d",&query[i]);	

	for(k=0;k<Q;k++){ 
		count = 0;
		for(j=0;j<N;j++){
			min = 99999;
			contain = false;
			for(i=j;i<N;i++){
				if(arr[i]<min) min = arr[i];
				if(min != query[k])
					contain = false;
				if(!contain && arr[i]==query[k]){
					contain = true;
				}
				if(contain && min == query[k])
					count++;						
			}
		}
		printf("%d\n",count);
	}
	// free(arr);
	// free(query);
	return 0;
}
