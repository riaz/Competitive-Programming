#include <stdio.h>

int main(){
	int T,i;
	int num,temp;
	int twocount;
	long long count;
	
	scanf("%d",&T);
	
	while(T--){
		count = 0;
		twocount = 0;
		scanf("%d",&num);
		for(i=0;i<num;i++){
			scanf("%d",&temp); 			
			if(temp == 1 || temp == 0) continue;
			else if(temp == 2) twocount++;
			count++;
		}	
	
		printf("%lld\n",((count-1)*count)/2 - (twocount*(twocount-1)/2));
		 				
	}
	return 0;
}
