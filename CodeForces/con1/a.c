#include <stdio.h>

int main(){
	int n,m,a;
	int count=0;
	scanf("%d%d%d",&n,&m,&a);
	count = n/a;
	n = n%a;
	printf("%d\n",count);	
	if(n!=0)
	{
		count++;
	}
	printf("%d\n",count);		
	count += (m-a)/a;
	printf("%d\n",count);		
	m = (m-a)%a;	
	if(m!=0)
	{
		count++;
	}
	printf("%d",count);
	return 0;
}
