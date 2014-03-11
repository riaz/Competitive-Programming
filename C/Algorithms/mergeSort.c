#include<stdio.h>
 
/* Function to merge the two haves arr[l..m] and arr[m+1..r] of array arr[] */

void merge(int arr[],int l,int m,int r){
	int i,j,k;
	int n1 = m-l+1;
	int n2 = r - m;

	/*Creating two temporary arrays*/
	int temp1[n1],temp2[n2];

	   /* Copy data to temp arrays L[] and R[] */
	    for(i = 0; i < n1; i++)
	        temp1[i] = arr[l + i];
	    for(j = 0; j <= n2; j++)
	        temp2[j] = arr[m + 1+ j];	

	i=j=0;
	k=l;

	while(n1>i && n2>j){
		if(temp1[i]<=temp2[j]){
			arr[k] = temp1[i];
			i++;
		}else{
			arr[k] = temp2[j];
			j++;
		}
		k++;
	}


	//Note: The above while condition fails when one or both of the array length wears out
	//If both weared out simulatenously, that means we have nothing remaning to append
	//But, if thats not the case, then we append all the remaining elements from the array
	//that didn't complete .

	while(i<n1){ //i.e still elements are remaining
		arr[k] = temp1[i];
		i++;
		k++;
	}

	while(j<n2){
		arr[k] = temp2[j];
		j++;
		k++;
	}

}
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2; //Same as (l+r)/2, but avoids overflow for large l and r
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}
 
 
/* UITLITY FUNCTIONS */
/* Function to print an array */
void printArray(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}
 
/* Driver program to test above functions */
int main()
{
    int arr[] = { 38, 27, 43, 3, 9, 82, 10};
    int size = sizeof(arr)/sizeof(arr[0]);
 
    printf("Given array is \n");
    printArray(arr, size);
 
    mergeSort(arr, 0, size - 1);
 
    printf("\nSorted array is \n");
    printArray(arr, size);
    return 0;
}
