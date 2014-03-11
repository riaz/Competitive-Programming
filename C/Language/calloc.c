#include <stdio.h>
#include <stdlib.h>

/*Program demostrating allocation of memory using calloc
*/
int main(){
	int n,i,*ptr,sum=0;
	printf("Enter the number of elements: ");
	scanf("%d",&n);

	ptr = (int*)calloc(n,sizeof(int));
	if(ptr == NULL){
		printf("Error!Memory not allocated");
		exit(0);
	}
	printf("Enter the elements of the array:\n");
	for(i=0;i<n;i++){
		scanf("%d",ptr+i);
		sum += *(ptr+i);
	}

	printf("Sum =%d",sum);
	free(ptr);
	return 0;
}
