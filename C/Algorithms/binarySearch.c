#include <stdio.h>
#include <stdlib.h>

int *arr;


bool binarySearch(int start,int end,int a){
	int mid = ((start+end)%2==0)?(start+end)/2:(start+end-1)/2;
	if(a == arr[mid]){
		return a;
	}else if(a>arr[mid])
		binarySearch(mid+1,end,a);
	else if(a<arr[mid])
		binarySearch(start,mid-1,a);
	return -1;
}

int* sorter(int arr[],int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				arr[j] = arr[i] + arr[j];
				arr[i] = arr[j] - arr[i];
				arr[j] = arr[j] - arr[i];
			}
		}
	}
	return arr;
}

int main(){
	int i,j,L;
	int num;
	
	scanf("%d\n",&L);
	arr = (int*)malloc(L*sizeof(int));
	for(i=0;i<L;i++){
		scanf("%d",&arr[i]);		 //populating the array from the user
	}

	scanf("%d",&num); //Enter the value to search for in the provided array

	arr = sorter(arr,L); //passing the input array to a sorter function to return a sorted array

	if(binarySearch(0,L,num)!=-1){
		printf("The value was found\n");		
	}else{
		printf("The value was not found\n");
	}
	return 0;
}
