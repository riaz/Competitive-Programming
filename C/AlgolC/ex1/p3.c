#include <stdio.h>
#include "ex1.h"


struct fraction{
	int numerator;
	int denominator;
};

int main(){
	struct fraction num;
	printf("Enter the numbers:");
	scanf("%d%d",&num.numerator,&num.denominator);
	printf("%d\n",gcd(num.numerator,num.denominator));
	return 0;
}
