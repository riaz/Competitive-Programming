#include <stdio.h>
int arr[100];
int arr2[100];

void sort(int arr[],int len){
	int i=0,j;
	for(;i<len-1;i++){
		for(j=i+1;j<len;j++){
			if(arr[i]>arr[j]){
				arr[j] = arr[i] + arr[j];
				arr[i] = arr[j] - arr[i];
				arr[j] = arr[j] - arr[i];
			}
		}
	}
}

int main(){
	int T,n,i,k,j,count;
	scanf("%d",&T);
	while(T--){
		count = 0;
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d",&arr[i]);
		}
		sort(arr,n);
		for(i=0;i<n;i++){
			scanf("%d",&arr2[i]);
		}
		sort(arr2,n);
		k=0;
		for(i=0;i<n;i++){
			for(j=k;j<n;j++){
				if(arr[i]<=arr2[j]&& arr2[j]!=0)
				{
					arr2[j] = 0;
					count++; break;
				}	
			}		
			k = j-1;
			if(k>=n) break;
		}
		printf("%d\n",count);
	}
	return 0;
}
