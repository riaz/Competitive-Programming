#include <stdio.h>

int main(){
	int a = 5;
	int b = 6;
	printf("a: %d\n",a);
	printf("b: %d\n",b);

	a^=b;
	//a ^= b ^= a ^= b;

	printf("a: %d\n",a);
	printf("b: %d\n",b);

	return 0;
}
