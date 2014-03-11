#include <stdio.h>

#define TWO(c)     (0x1u << (c))
#define MASK(c) \
  (((unsigned int)(-1)) / (TWO(TWO(c)) + 1u))
#define COUNT(x,c) \
  ((x) & MASK(c)) + (((x) >> (TWO(c))) & MASK(c))

static int bits_in_char [256] ;
static char bits_in_16bits [0x1u << 16] ;



/* Example program demonstrates fast bit counting algorithms
* to count the number of 1 bits in a unsigned integer
*/

//Iterative count method for unsigned integers
//The below method is time-proportional to the number of bits that are involved
int bitcount1(unsigned int n){
	int count = 0;
	while(n){
		count += n & 0x1u;
		n>>=1;
	}
	return count;
}

//Iterative count method for signed integers
int bitcount2(int n){
	int count = 0;
	while(n){
		if(n & 1)count++;
		n>>=1;
	}
	return count;
}

//Sparse One technique
//This method runs time-proportional to the number of 1s in the bitfield of the number
//The line n&= n-1; set the rightmost 1 to 0 per iteration of the loop
int bitcount3(unsigned int n){
	int count = 0;
	while(n){
		count++;
		n &= n - 1;
	}
	return count;
}

//Dense Ones
//This method runs in time proportional to the number of 0s involved
//This is similar to the sparse ones, except first all the bits are toggled and then continuously substract 1 from sizeof(int).

int bitcount4(unsigned int n){
	int count = 8 * sizeof(int);
	n ^= (unsigned int) - 1;
	while(n){
		count--;
		n &= (n - 1);
	}
	return count;
}

//Pre-compute 8 bit version
int bitcount5(unsigned int n)  {
  // works only for 32-bit ints
  return bits_in_char [n & 0xffu]
      +  bits_in_char [(n >>  8 ) & 0xffu]
      +  bits_in_char [(n >> 16)  & 0xffu]
      +  bits_in_char [(n >> 24)  & 0xffu];
}

//Pre-compute 16 bit version
int bitcount6(unsigned int n)  {
   // works only for 32-bit ints
   return bits_in_16bits [n & 0xffffu]
       +  bits_in_16bits [(n >> 16) & 0xffffu] ;
}

//Parallal Count Method
//This carries out bit counting in a parallel way

int bitcount7(unsigned int n)  {
   n = COUNT(n, 0) ;
   n = COUNT(n, 1) ;
   n = COUNT(n, 2) ;
   n = COUNT(n, 3) ;
   n = COUNT(n, 4) ;
   /* n = COUNT(n, 5) ;    for 64-bit integers */
   return n ;
}



int main(){
	int i = 255;
	printf("Iterative Count Method: %d\n",bitcount1(i));
	printf("Iterative Count Method II: %d\n",bitcount2(i));
	printf("Sparse Ones: %d\n",bitcount3(i));
	printf("Dense Ones: %d\n",bitcount4(i));

	return 0;
}
