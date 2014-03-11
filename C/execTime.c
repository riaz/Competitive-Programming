#include<stdio.h>
#include<time.h>

/*
*	CLOCKS_PER_SEC is a constant in time.h, which is system depenent
*/

main(){

	clock_t begin,end;
	double time_spent;

	int i,j;

	begin = clock();
	/* Payload*/
	for(i=0;i<1000;i++)/*An empty n*2 complexity*/
		for(j=0;j<10000;j++);

	/* Payload*/	
	end = clock();

	time_spent = (double)(end - begin)/CLOCKS_PER_SEC;

	printf("Time Elapsed: %lf\n",time_spent);
	return 0;
}
