#include <stdio.h>
#include <stdlib.h>
#define MAX 200

/*Utility program to print the elements of an array*/
void printArray(int *a,int size){
	int i=0;
	for(;i<size;i++)
		printf("%d ",*(a+i));
	printf("\n");
}

//Main function that implements the interpolation search
int interpolation_search(int a[],int bottom,int top,int item){
	int mid;
	while(bottom<=top){
		mid = bottom + (top-bottom)*((item-a[bottom])/(a[top]-a[bottom]));
		if(item == a[mid]) return mid + 1;
		if(item < a[mid])
			top = mid -1;
		else 
			bottom = mid + 1;
	}
	return -1; //returns if item was not found
}



// Driver program to test interpolation search
int main(){

	int arr[] = {2,5,6,7,12,13,19,32,43,54};
	int item = 5;
	int index;
	int size = sizeof(arr)/sizeof(arr[0]);

	printf("The Array to search Item\n");
	printArray(arr,size);

	printf("The item to be searched is: %d\n",item);

	if(index = interpolation_search(arr,0,size,item)!=-1)
		printf("Item was found  at Index: %d\n",index);
	else
		printf("Item was not found\n");
	return 0;
}

