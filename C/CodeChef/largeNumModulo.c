#include<stdio.h>
#include<time.h>

unsigned long long factorial(int n){
	if(n==1 || n==0)
		return 1;
	else
		return n*factorial(n-1);
}	

main(){
	clock_t begin,end;
	double time_elapsed;

	int clone;
	unsigned long long int clone2;

	begin = clock(); //Beginning of the clock
	printf("%llu\n",(factorial(20)/factorial(10))%1000000007);
	end = clock(); //Ending of the clock

	time_elapsed = begin - end;
	printf("Total time elapsed in calculation:%lf\n",time_elapsed);

	clone = 20*19*18*17*16*15*14; //Multiplying 13 exceeds integer
	clone = 13*(clone%1000000007);
	clone = 12*(clone%1000000007);	
	clone = 11*(clone%1000000007);		
	
	printf("Clone %d\n",clone);

	clone2 = 10000000000000000000ULL;	//Supports upto 20 after first digit 
	printf("Clone2 long test : %llu\n",clone2);
	return 0;
}
