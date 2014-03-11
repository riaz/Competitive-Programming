#include<stdio.h>

//Insertion Sort Algorithm
//Time Complexity : O(n^2) in worst case

//Function to print the current contents of the array
void printArray(int arr[],int n){
	int i=0;
	for(;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
}

//Function that performs insersionSort on the feeded array
void insertionSort(int arr[],int n){
	int i,k,j;
	for(i=1;i<n;i++){
		k=arr[i];
		j=i-1;		
		while(j>=0 && arr[j]>k){
			arr[j+1] = arr[j];
			j--;
		}
		arr[++j] = k;
	}
}

//Driver program for insertion sort
main(){
	int arr[] = {32,54,21,9,90,21,32};
	int size = sizeof(arr)/sizeof(arr[0]);
	//Unsorted Array
	printArray(arr,size);
	insertionSort(arr,size);
	//Sorted Array
	printArray(arr,size);
	
	return 0;
}
