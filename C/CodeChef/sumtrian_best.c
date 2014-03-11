#include<stdio.h>
 
int main(void)
{
int T,N,i,j,max;
int arr[100][100];
 
scanf("%d",&T);
while(T--)
{
	for(i=0;i<100;i++)
		for(j=0;j<100;j++)
			arr[i][j]=0;
	scanf("%d",&N);
 
	for(i=0;i<N;i++)
		for(j=0;j<=i;j++)
			scanf("%d",&arr[i][j]);
 
	for(i=1;i<N;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(j<=0)
			{
				arr[i][j]+=arr[i-1][j];
			}
			else
			{
				arr[i][j]+=arr[i-1][j]>arr[i-1][j-1]?arr[i-1][j]:arr[i-1][j-1];
			}
		}		
	   }
			max=arr[N-1][0];
			for(i=1;i<N;i++)
			{
				if(max<arr[N-1][i])
					max=arr[N-1][i];				
				
			}		
			printf("%d\n",max);	
}
 
return 0;	
} 