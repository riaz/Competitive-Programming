#include<stdio.h>
#include<stdlib.h>

//A heap DS has current size and array of elements
struct MaxHeap{
	int size;
	int* array;
};

//A utility function to print a given array
void printArray(int *arr,int size){
	int i;
	for(i=0;i<size;i++)
		printf("%d",*(arr+i));
	printf("\n");
	
}

//A utility function to swap elements
void swap(int *a,int *b){
	int temp = *b;
	*b = *a;
	*a = temp;
}

//The main function to heapify a Max Heap. The function assumes that
//everything under the given root(element at index idx) is already heapified.

//Note: By heapified we mean that a tree heap is formed,using the array

void maxHeapify(struct MaxHeap* maxHeap,int idx){
	int largest = idx;
	int left  = (idx << 1) + 1;
	int right = (idx << 1) + 2;

	//See if the left child of the root exists and is greater than the root
	if(left < maxHeap->size && maxHeap->array[left] > maxHeap->array[largest]){
		largest = left;
	}

	//See if right child of the root exists and is greater than the largest among all
	if(right < maxHeap->size && maxHeap->array[right] > maxHeap->array[largest]){
		largest = right;
	}

	//Change, root if largest was changed to right or left
	//swap the values between idx with largest
	if(largest !=idx){
		swap(&maxHeap->array[largest],&maxHeap->array[idx]);
		//After swapping , we again need to recursively heapify, unless the largest among all is at the top
		maxHeapify(maxHeap,largest);
	}
}

//Utitily to build a max heap of given society
struct MaxHeap* createAndBuildHeap(int *array,int size){
	int i;
	struct MaxHeap* maxHeap = (struct MaxHeap*)malloc(sizeof(struct MaxHeap));
	maxHeap->array  = array; //Assign address of the first element of the array
	maxHeap->size   =  size; //Initializing the size of the heap

	//Start from bottommost and rightmost internal node annd heapify all
	//internal nodes in the bottom up way
	for(i=(maxHeap->size-2)/2;i>=0;--i){
		maxHeapify(maxHeap,i);
	}
	
	return maxHeap;
}

//Main function to sort an array of given size
void HeapSort(int* array,int size){

	//Build the Heap from the Input Data
	struct MaxHeap* maxHeap = createAndBuildHeap(array,size);
	
	//Reapeat the following process while heapsize is greater than 1.The last
	//element in max heap will be the minimum element

	while(maxHeap->size>1){

		//The largest item in Heap is stored at the root.Replace it with the last 
		//item in the heap followed by decrementing the size count  by 1.
		swap(&maxHeap->array[0],&maxHeap->array[maxHeap->size-1]);
		--maxHeap->size; //Reducing the heap size by 1

		//finally Heapify the root of the tree.
		maxHeapify(maxHeap,0);
	}

}

/* Driver function to test above functions*/
int main(){

	int arr[] = { 12 , 11 , 13 , 5 , 6 , 7 };
	int size = sizeof(arr)/sizeof(arr[0]);

	printf("Given array is: \n");
	printArray(arr,size);

	HeapSort(arr,size);

	printf("Sorted array is: \n");
	printArray(arr,size);

	return 0;
}
