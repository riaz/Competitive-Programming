#include <stdio.h>

int main(){
	long T,i,num,temp;
	long max,maxi,freq;
	scanf("%ld",&T);
	while(T--){
		max = 0; //max weight
		scanf("%ld",&num);
		i=0;
		freq=0;			
		while(num--){
			scanf("%ld",&temp);
			if(temp == max){
				freq++;
			}  
			if(temp>max){
				max = temp; maxi = i;
			}
			i++;
		}
		printf("%ld\n",max+maxi+freq);
	}
	return 0;
}
