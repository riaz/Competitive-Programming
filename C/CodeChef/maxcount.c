#include <stdio.h>

int main(){
	int T,num,i,n;
	int max,idx;
	int arr[10005];		
	scanf("%d",&T);	
	while(T--){
		max=-1;
		scanf("%d",&num);
		for(i=1;i<=10000;i++) arr[i]=0;
		for(i=1;i<=num;i++){
			scanf("%d",&n);
			arr[n]++;
			if(arr[n]>max){ max = arr[n]; idx = n; }
			else if(arr[n]==max){ max = arr[n]; if(n<idx)idx = n;}
		}
		printf("%d %d\n",idx,arr[idx]);
	}
	return 0;
}
