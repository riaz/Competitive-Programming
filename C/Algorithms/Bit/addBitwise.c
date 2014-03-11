#include <stdio.h>

/* Bitwise Addition*/
//                11001 -> 25
//                 1110 -> 14
//-----------------------------  
//  initial sum:  10111 -> 23
//  initial carry: 1    ->  8   

int main(){
	unsigned int x = 25, y = 14, sum, carry;
	sum = x ^ y ; //XOR 
	printf("sum: %d\n",sum);
	carry = x & y; // AND
	printf("Carry: %d\n",carry);

	while(carry!=0){
		carry = carry<<1;
		x = sum;
		y = carry;
		sum   = x ^ y;
		carry = x & y;
	}

	printf("%d\n",sum);
	return 0;
}
