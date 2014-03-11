#include<stdio.h>

/*Sorting Algorithm - Bubble Sort*/
//Time Complexity in Worst Case: O(n*n)

void swap(int *num1,int *num2){
	*num2 = *num1 + *num2;
	*num1 = *num2 - *num1;
	*num2 = *num2 - *num1;
}

void bubbleSort(int arr[],int n){
	int i,j;
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(arr[i]>arr[j])
				swap(&arr[i],&arr[j]);	
	
}

void printArray(int arr[],int n){
	int i=0;
	for(;i<n;i++)
		printf("%d",arr[i]);		
	printf("\n");	
}

//Driver Program for Testing Bubble SOrt
main(){
	int arr[] = {5,1,4,2,8};
	int size = sizeof(arr)/sizeof(arr[0]) ;
	//Unsorted Array
	printArray(arr,size);
	bubbleSort(arr,size);		
	//Sorted Array
	printArray(arr,size);	
	return 0;
}
