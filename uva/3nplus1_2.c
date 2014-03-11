#include <stdio.h>


unsigned long long next(unsigned long long previous){
	if(previous%2==0)
		return previous/2;
	else
		return 3*previous+1;
}

unsigned long long cycleLength(unsigned long long num){
	long long length;
	if(num == 1)
		return 1;
	
	length = 1 + cycleLength(next(num));
		return length;
}
int main(){
	unsigned long long a,b,maxcount,count,i;
	while(scanf("%llud %llud",&a,&b) != EOF){
		maxcount = 0;
		if(a>b){
			b = a+b;
			a = b - a;
			b = b - a;
		}
		for(i=a;i<=b;i++){
			count = cycleLength(i);
			if(count>maxcount)	
				maxcount = count;
		}	
		printf("%llud %llud %llud\n",a,b,maxcount);	
	}
	return 0;	
}
