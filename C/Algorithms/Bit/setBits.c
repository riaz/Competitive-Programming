#include<stdio.h>

//Program to find the number of set bits in a number

//Concept: num *num -1 clears the least significant set bit..
//so we carry on the process unless number becomes 0.
//At thatpoint, the count of the iterator is the no. of set bits

int main(){
	int value = 7; 
	int i;
	for(i=0;value!=0;i++){ //counter starts from 0
		value = value & value -1;
	}
	printf("number of set bits: %d\n",i);
	return 0;
}
