#include <stdio.h>

inline void fastRead(int *a){
	register char c = 0;
	while(c < 33) c = getchar();
	*a = 0;
	while(c>33){
		*a = *a*10 + c-'0';
		c = getchar();
	}
}

int arr[1000001];
int t;

int main()
{
	int i;
	int data,num;
	fastRead(&t);
	num = t;
	while(t--)
	{
		fastRead(&data);
		arr[data]++;
	}	
	for(i=0; i<=num; i++)
	{
		while(arr[i]--) printf("%d\n",i);
	}
 
return 0;	
}
