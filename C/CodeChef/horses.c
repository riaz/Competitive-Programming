/*HORSES.c*/

#include <stdio.h>

int main(){
	int T,N,i;
	int temp;
	int min1,min2;
	scanf("%d",&T);
	while(T--){
		scanf("%d",&N);
		min1 = min2 = 1000000001;
		for(i=0;i<N;i++){
			scanf("%d",&temp);
			if(temp<min1)min1 = temp ;
			else if(temp<min2 && temp > min1) min2 = temp;
		}
		printf("%d %d\n",min2,min1);
	}
	return 0;
}
