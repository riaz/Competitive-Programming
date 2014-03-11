#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* Program to find subrarrays with a given sum*/


int main(){
	// int arr[] = {1,4,20,3,10,5};
	int arr[] = {1,4,0,0,3,10,5};	
	// int arr[] = {1,4};
	int tsum,i,j;
	int size = sizeof(arr)/sizeof(int);
	int sum = 7;


	for(i=0;i<size;i++){
		tsum = 0;
		for(j=i;j<size;j++){
			tsum+=arr[j];
			// printf("->%d\n",tsum);
			if(tsum==sum){
				printf("Sum found between indexes %d and %d\n",i,j);
				return 1;
			}
		}
	}
	printf("No subarray found");
	return 0;
}
