//HOTEL.c
#include<stdio.h>
int main(){
	int T,i,num,temp;
	int count;
	int maxArr;
	scanf("%d",&T);
	while(T--){
		count = 0;
		maxArr = 0;
		scanf("%d",&num);
		for(i=0;i<num;i++){
			scanf("%d",&temp);if(temp>maxArr)maxArr=temp;	
		}
		for(i=0;i<num;i++){
			scanf("%d",&temp);if(temp>maxArr)count++;	
		}		
		printf("%d\n",count);
	}
	return 0;
}
