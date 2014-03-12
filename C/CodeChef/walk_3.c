#include <stdio.h>
#define SIZE 100005

int  main(){
	int T,i;
	int num;
	int max,maxi,temp;
	
	scanf("%d",&T);
	while(T--){
		max = 0;
		scanf("%d",&num);		
		for(i=0;i<num;i++){
			scanf("%d",&temp);
			if(temp>=max){
				max = temp;
				maxi = i;
			}
		}
		printf("%lld\n",(long long)maxi+(long long)max);		
	}
	return 0;
}
