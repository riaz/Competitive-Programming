#include<stdio.h>
#include<stdlib.h>

/* Algorithm to Find the minimum length sorted array, sorting which
makes the complete array sorted*/

//Examples:

//1. if the input array is [10,12,20,30,25,40,32,31,25,50,60], the program should be able to find the subArray between
// index  3 and 8.

//2. if the input array is [0,1,15,25,6,7,30,40,50], the program should be able to find the subArray between
// index 2 and 5.

//Solution
//1. FInding the candidate unsorted array.
//2. Check whether the candidate unsoted array makes the complete array sorted,if not we need to include
//mode elements into the subarray

void printUnsorted(int arr[],int n){
	int s=0,e = n-1,i,min,max;

	//Scanning from left to right of the array , to find a value which is greater than the next 
	//element and storing it under s.

	for(s=0;s<n-1;s++){
		if(arr[s]>arr[s+1])
			break;
	}
	if(s == n-1){ //meaning , the array is already sorted
		printf("The array is sorted already\n");
		return;
	}

	//Scanning from  right to left of the array , to find a value which is smaller than the next 
	//element and storing it under e.

	for(e=n-1;e>0;e--){
		if(arr[e]<arr[e-1])
			break;
	}

	//Now , we try to find the max and min elements int the set ar[s...e], and store them in max and min.
	//if there is a value greater than min in arr[0..s-1] , make that index as 's'.
	//if there is a value smaller than max in arr[e+1..n-1], make that index as 'e'.
	//Altast, print the values of s and e , which happens to be be the minimum unsorted sub-array

	min = 999999;
	max = 0;
	for(i=s;i<=e;i++){
		if(arr[i]<min) min = arr[i];
		if(arr[i]>max) max = arr[i];
	}

	//Finding any index , with greater value than min in arr,
	// and setting s to that index
	for(i=0;i<s;i++){
		if(arr[i]>min){
			s = i; break;
		}
	}

	//Finding any index , with greater value than min in arr,
	// and setting s to that index
	for(i=e+1;i<n;i++){
		if(arr[i]<max){
			e = i; break;
		}
	}	

	printf("%d %d \n",s,e);
		
}

int main(){
	int arr[] = {10,12,20,30,25,40,32,31,35,50,60};
	// int arr[] = {0,1,15,25,6,7,30,40,50};
	int size = sizeof(arr)/sizeof(arr[0]);
	printUnsorted(arr,size);

	return 0;
}




