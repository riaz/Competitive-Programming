#include<stdio.h>
#include<stdlib.h>

/* Optimized solution to the subarray problem with given sum problem */

/*  Returns true if there is a subarray with the given sum,
*  otherwise returns false. Also, prints the result
*/

int subArraySum(int arr[],int n,int sum){
	int curr_sum = arr[0],start = 0,i;

	//Add elements one by one to curr_sum ,and if the curr_sum exceeds the sum,
	//substract the starting elements

	for(i=1;i<=n;i++){
		while(curr_sum> sum && start < i-1){
			curr_sum = curr_sum - arr[start];
			start++;
		}

		//if the curr_sum equals the sum, then return true
		if(curr_sum == sum){
			printf("Sum found between indexes %d and %d",start,i-1);
			return 1;
		}

		//Adding the element to the current sum
		if(i<n){
			curr_sum = curr_sum + arr[i];
		}
	}

	//No subArray found
	printf("No Subarray found!\n");
	return 0;
}

/* Driver program to test the above function*/
int main(){
	int arr[] = {15,2,4,8,9,5,10,23};
	int size = sizeof(arr)/sizeof(arr[0]);
	int sum = 23;
	subArraySum(arr,size,sum);
	return 0;
}

