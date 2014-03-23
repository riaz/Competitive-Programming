#include<stdio.h>

int main()
{
	int i,N,T;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&N);	
		for(i=1;i*i<=N;i++)
			if(N%i==0)			
				printf("%4d %4d",i,N/i);
		printf("\n");
	}
	return 0;
}
 
