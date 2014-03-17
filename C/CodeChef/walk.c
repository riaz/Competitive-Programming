#include <stdio.h>
#define SIZE 100000

int main(){
	unsigned long long ans;
	int T,num,i;
	int arr[SIZE];
	scanf("%d",&T);
	while(T--){
		ans = 0;	
		scanf("%d",&num);
		
		for(i=0;i<num;i++)scanf("%d",&arr[i]);
		ans = arr[num-1];
		for(i=num-2;i>=0;i--){
			if(arr[i] > ans)
				ans = ans + (arr[i]-ans);
			else if(arr[i] <= ans)
				ans++;					
		}
		printf("%llu\n",ans);
	}	
return 0;
}
