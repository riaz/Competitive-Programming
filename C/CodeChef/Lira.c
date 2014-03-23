#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double getArea(int arr[]){	
	return (0.5*abs((arr[0] - arr[4])*(arr[3] - arr[1]) - (arr[0] - arr[2])*(arr[5] - arr[1]))); 
}

int main(void)
{
	int N,tN;
	int i,j;
	int **arr;

	double aMax,aMin; //Area max and Area min
	int iMax,iMin;  //Index max and Index min
	
	double temp;

	scanf("%d",&N);
	
	aMax = 0;
	iMax = 0;
	aMin = 99999999;
	iMin = 999999;

	if((arr = (int**)malloc(N*sizeof(int)))==NULL){
		/*The desired memory space couldn't be assigned*/
		exit(10);
	}
	
	i=0;
        tN = N;			
	while(N--)
	{
		if((arr[i] = (int*)malloc(6*sizeof(int)))==NULL){exit(10);}	
		for(j=0;j<6;j++)
			scanf("%d",&arr[i][j]);
		i++;
	}
	

	for(i=0;i<tN;i++)
	{
		temp = getArea(arr[i]);		
		if(temp >= aMax){
			aMax = temp;
			iMax = i+1;
		}
		
		if(temp <= aMin){
			aMin = temp;
			iMin = i+1;
		}
	}

	printf("%i %i\n",iMin,iMax);

	return 0;
}
