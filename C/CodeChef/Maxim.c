#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>

/*
We write a method that returns all the factors of a number
*/

int* factor(int n) /*this method returns all the factors of a number*/
{
	int i,j;
	int* fact;
	j=0;
	if((fact=(int*)malloc(n*sizeof(int)))==NULL){ exit(10);}
	for(i=1;i<=n;i++)
	{
		if(n%i == 0)
			fact[j++] = i;			
		
	}	
	
	return fact;
}

int main(void) {
	int T,temp;
	int *arr,i,j;
	int *fact;
	bool count;
	int len; //for counting the number of factors of a number
	
	/*Taking the number of test cases as input from the user*/
	scanf("%d",&T);
	temp = T;
	i=0;
	if((arr=(int*)malloc(T*sizeof(int)))==NULL){ exit(10);}
	while(temp--)
	{
		scanf("%d",&arr[i]);
		i++;
	}
	
	for(i=0;i<T;i++)
	{
		if((fact = (int*)malloc(arr[i]*sizeof(int)))==NULL){ exit(10);}
		fact = factor(arr[i]);
		
		len = 0;
		while(fact[len]!=0){ len++; }

		printf("%4d ",arr[i]);
		count = 0;
		for(j=0;j<len;j++)
		{				
			if(fact[j] == 4 || fact[j] == 7)
				count = count+1;							
		}		
		printf("%4d",count);
		printf("\n"); /*This will print the output in a new row*/
	}
	
	return 0;
}

