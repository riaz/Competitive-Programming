#include <stdio.h>
#include <stdlib.h>

/*Program demostrating allocation of memory using realloc
*/
int main(){
	int n1,n2,i,*ptr;
	printf("Enter the number of elements: ");
	scanf("%d",&n1);

	ptr = (int*)calloc(n1,sizeof(int));
	if(ptr == NULL){
		printf("Error!Memory not allocated");
		exit(0);
	}
	printf("Elements of the array:are:\n");
	for(i=0;i<n1;i++){
		printf("%d",*(ptr+i));		
	}

	//Now using realloc to expand or shrink the memory
	printf("Enter the number of elements: ");
	scanf("%d",&n2);

	ptr = realloc(ptr,n2);
	if(ptr == NULL){
		printf("Error!Memory not allocated");
		exit(0);
	}
	printf("Elements of the array:are:\n");
	for(i=0;i<n2;i++){
		printf("%d",*(ptr+i));		
	}
	
	return 0;
}
