#include<stdio.h>

/* Demonstating a recursive implementation of the quicksort algorithm*/

//Utility function to print an array
void printArray(int *arr,int size){
	int i=0;
	for(;i<size;i++)
		printf(" %d ",*(arr+i));
	printf("\n");
}

//Utility function to swap 2 numbers
void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

/* This function takes the last element as pivot,places the pivot element at their correct 
position in sorted array,and places all smaller elements to the left of the pivot and all the
larger elements to the right of the pivot
*/

int partition(int arr[],int l, int r){
	int j;
	int x = arr[r]; //pivot
	int i = (l-1); //Index of the smallest element

	for(j=l;j<=r-1;j++){
		// If current element is smaller than or equal to pivot
		if(arr[j]<x){
			i++;
			swap(&arr[i],&arr[j]);
		}
	}
	swap(&arr[i+1],&arr[r]);
	return i+1;
}

void quickSort(int *arr,int l,int r){
	int q;
	if(l<r){
		q = partition(arr,l,r);
		quickSort(arr,l,q-1);
		quickSort(arr,q+1,r);
	}
}


int main(){
	// int arr[] = {10,7,8,9,1,5};
	int arr[] = {1,5,7,8,9,10};
	int size = sizeof(arr)/sizeof(int);
	printf("Given Array:\n");
	printArray(arr,size);

	quickSort(arr,1,size);

	printf("Sorted Array:\n");
	printArray(arr,size);
	return 0;
}
