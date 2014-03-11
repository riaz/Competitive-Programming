#include<stdio.h>
 
int fastinput()
{
	int i=0;
	char c = getchar();
	while(c<48)
		c = getchar();
	while(c>47)
	{
		i = i*10 + c - '0';
		c =  getchar();
	}
	return i;
}
 
void fastoutput(int i)
{
	if(i==0)
	{
		putchar('0');
	}
	else
	{
	int temp=i;
	int count = 1;
	while(temp!=0)
	{
		temp=temp/10;
		count=count*10;
	}
	temp = 0;
	int digit;
	while((count=count/10)!=1)
	{
		temp = i / count;
		i = i % count;
		putchar(temp+'0');		
	}
	putchar(i+'0');
	}	
	putchar('\n');
}
 
int main()
{
	int n,left[100001],right[100001],i;
	static int hash[100002],hashl[100002],hashr[100002];
	n = fastinput();
	for(i=0;i<n;i++)
	{
		left[i] = fastinput();
		right[i] = fastinput();
		hashl[left[i]]++;
		hashr[right[i]]++;
		hash[left[i]]++;
		hash[right[i]]++;
	}	
	int rorl = 0;
	int index = 0;
	for(i=0;i<100001;i++)
	{
		if(hash[i]>=(n+1)/2)
		{
			if(hashl[i]>rorl)
			{
				rorl = hashl[i];
				index = i;
			}
		}
	}
	if(rorl==0)
		printf("Impossible");
	else
	{
			if((n+1)/2 - hashl[index]>=0)
				printf("%d",(n+1)/2 - hashl[index]);
			else
				printf("0");
	}
	return 0;
} 
