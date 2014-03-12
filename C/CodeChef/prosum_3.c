#include <stdio.h>
#define SIZE 100005

int main(){
	int T,i,j;
	int num;
	int arr[SIZE];

	long long count;
	
	scanf("%d",&T);
	
	while(T--){
		count = 0;
		scanf("%d",&num);
		for(i=0;i<num;i++){
			scanf("%d",&arr[i]); 			
		}
		
		for(i=0;i<num;i++){
			if(arr[i]==0 || arr[i]==1) continue;
			for(j=i+1;j<num;j++){
				if(arr[j]!=0 && arr[j]!=1 && i < j){
					if(arr[i] == 2 && arr[j] == 2) continue;
					else{
						count++;											
					}
				}		
					
			}
		}
		printf("%lld\n",count);
		 				
	}
	return 0;
}
