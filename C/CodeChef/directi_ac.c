#include<stdio.h>
#include<string.h>
int main()
{
int t=0,n=0,k=0,i=0;
char turn[40][50],road[40][50];
scanf("%d",&t);
while(t--)
{
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%s %[^\n]%*c",turn[i],road[i]);
	for(i=n-1;i>=0;i--)
	{
		if(i==(n-1))
		printf("Begin %s",road[i]);
		else
		{
			k=strcmp(turn[i+1],"Left");
			if(k!=0)
			printf("Left %s",road[i]);
			else
			printf("Right %s",road[i]);
		}
printf("\n");
 
	}
printf("\n");
 
}
 
return 0;
} 
