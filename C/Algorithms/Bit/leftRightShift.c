#include <stdio.h>
#include <limits.h>

/* Program to demonstrate right shift operation in C*/

void showbits(unsigned int x){
	int i;
	for(i=(sizeof(int)*CHAR_BIT)-1;i>=0;i--){
		(x&(1<<i))?putchar('1'):putchar('0');
	}
	printf("\n");
}

int main(){
	int j= 5342,k,m,n;
	printf("The decimal %d is equal to binary -> ",j);
	showbits(j);

	k = j;
	//Showing effect of right shift operator on input data
	for(m=0;m<5;m++){
		printf("Right Shift %d:",m+1);
		showbits(j>>m);
	}

	//Showing effects of left shift operator on input data
	for(m=0;m<5;m++){
		printf("Left Shift %d:",m+1);
		showbits(j<<m);			
	}

	return 0;
}
