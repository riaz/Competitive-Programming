#include<stdio.h>

/* Method*/
// Example 1:
//   2 ->        10 
//   2-1 -> 1 -> 01
// 2 & 2-1 =     00

//Example 2:
// 8   ->       1000
// 8-1 -> 7 ->  0111
// 8&7      ->  0000

int main(){
	int num=8;
		printf("xyz %d\n",num&num-1);

		if(num!=0 && (num&num-1)==0)
			printf("Number is a power of 2\n");
		else
			printf("Number is not a power of 2\n");		

	return 0;
}
