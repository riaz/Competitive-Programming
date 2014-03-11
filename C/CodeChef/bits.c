#include <stdio.h>

int setBitCount(int i)
{
    i = i - ((i >> 1) & 0x55555555);
    i = (i & 0x33333333) + ((i >> 2) & 0x33333333);
    return (((i + (i >> 4)) & 0x0F0F0F0F) * 0x01010101) >> 24;
}

int main(void) {
	int T,num;
	long sum=0;
	scanf("%d",&T);
	while(T--){
		scanf("%d",&num);
		sum=0;
		while(num)
			sum+=setBitCount(num--);
		printf("%d\n",sum);		
	}
	return 0;
}