#include <stdio.h>
#define SIZE 100005

int  main(){
	int T,i;
	int n;
	int arr[SIZE];

	long long seed;

	scanf("%ld",&T);
	while(T--){
		scanf("%ld",&n);
		for(i=0;i<n;i++)
			scanf("%d",&arr[i]);
		seed = arr[n-1]+1;
		for(i=n-2;i>=0;i--){
			if(seed >= arr[i])
				seed++;
			else{ //increment seed while seed not equal to arr[i]
				while(seed != arr[i]) seed++;
			}
		}
		printf("%lld\n",seed-1);		
	}
	return 0;
}
