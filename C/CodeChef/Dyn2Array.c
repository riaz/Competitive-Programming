#include<stdio.h>
#include<stdlib.h>

/*
This program accepts a variable array size and the corressponding entries prior to printing in on the screen
*/

int main(void)
{
	int** arr;
	int size;
	int i,j;

	/*This accepts the size if the array from the user-end*/
	scanf("%d",&size);

	if((arr = (int**)malloc(size*sizeof(int)))==NULL){
		/*The desired memory space couldn't be assigned*/
		exit(10);
	}
	
	i=0;
	while(size--)
	{
		if((arr[i] = (int*)malloc(6*sizeof(int)))==NULL){exit(10);}	
		for(j=0;j<6;j++)
			scanf("%d",&arr[i][j]);
		i++;
	}


	return 0;
}
