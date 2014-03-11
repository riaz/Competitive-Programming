#include <stdio.h>
#include <time.h>

int main(void) {
	clock_t begin,end;
	double time_elapsed;
	int P;
	long long n,k,m,t,sum;
	scanf("%d",&P);

	begin = clock();
	while(P--){
		scanf("%lld%lld%lld",&n,&k,&m);
		t=0;
		sum=0;
		while(m>=sum){
			if(sum)
				sum = sum*k;
			else
				sum = n*k;
			t++;
		}
		printf("%lld\n",t-1);
	}
	end = clock();
	time_elapsed = (double)(begin - end)/CLOCKS_PER_SEC;
	printf("Time Elapsed: %lf\n",time_elapsed);

	return 0;
}
