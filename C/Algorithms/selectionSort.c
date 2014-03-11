#include<stdio.h>

/** SELECTION SORT **/
// Example Execution
// -> 64 25 12 22 11
// -> 11 25 12 22 65
// -> 11 12 25 22 65
// -> 11 12 22 25 65
// -> its over

// Time-Complexity in worst-case:
// O(n*n)



//swapping operation
void swap(int *num1,int *num2){
	*num2 = *num1 + *num2;
	*num1 = *num2 - *num1;
	*num2 = *num2 - *num1;
}

//Printing the whole array at any given point of time
void printArray(int arr[],int n){
	int i;
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
}


/* Function that computes the selection sort
* Params: Unsorted Array, Array Length
*/
void selectionSort(int arr[],int n){
	int i,j,min_idx;
	printArray(arr,n);
	for(i=0;i<n-1;i++){
		min_idx = i;
		for(j=i+1;j<n;j++){
			if(arr[j]<arr[min_idx]){
				min_idx = j;
			}
		}
		if(min_idx !=i)
			swap(&arr[min_idx],&arr[i]);
		printArray(arr,n);
	}
}

main(){
	int a[] = {64,25,12,22,11};
	int size = sizeof(a)/sizeof(a[0]);
	selectionSort(a,size);
	return 0;
}
