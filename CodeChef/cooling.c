#include <stdio.h>

int arr1[100];
int arr2[100];

void sort(int len){
	int i,j;
	for(i=0;i<len-1;i++){
		for(j=i+1;j<len;j++){
			if(arr2[i] > arr2[j]){
				arr2[j] = arr2[i] + arr2[j];
				arr2[i] = arr2[j] - arr2[i];
				arr2[j] = arr2[j] - arr2[i];
			}
		}
	}
}

int main(){
	int T,num,i,j;
	scanf("%d",&T);
	int count;
	while(T--){
		scanf("%d",&num);
		for(i=0;i<num;i++){
			scanf("%d",&arr1[i]);
		}
		for(i=0;i<num;i++){
			scanf("%d",&arr2[i]);
		}
		sort(num);
		for(i=0;i<num;i++){
			j=0;
			while(arr1[i]>arr2[j]){
				j++;
			}
			arr2[j]=0;
			count++;
		}
	}	
	return 0;
}
