#include <stdio.h>
#include <limits.h>

/* This program is used to find the sign of the given integer*/
/* The sign bit of a number is the first bit of the number*/
int main(){
	int value = -4;
	int pvalue = +4;
	int sign = (value >> ( sizeof(int)*CHAR_BIT - 1)); //Minus 1 to get the last bit value
	int psign = (pvalue >> ( sizeof(int)*CHAR_BIT - 1)); //Minus 1 to get the last bit value
	
	printf("Num: %d Sign: %d\n", value , sign);
	printf("Num: %d Sign: %d\n", pvalue, psign);
	
	return 0;
}
