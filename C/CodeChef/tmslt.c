#include <stdio.h>
#include <stdbool.h>
 
#define NUM 1000000
 
int main(){
	int T;
	int n,a,b,c,d;
	long long sum,val;
	bool flag;
	scanf("%d",&T);
	while(T--){
		sum = 0;
		scanf("%d%d%d%d%d",&n,&a,&b,&c,&d);
		val = d;
		sum += val;
		flag = true;		
		while(--n){
			//val = ((val%NUM)*( (a*(val%NUM))%NUM + b) + c)%NUM;
			val = ((a*val*val)%NUM + (b*val)%NUM + c)%NUM;			
			if(flag){
				sum-=val;
				flag = false;
			}else{
				sum+=val;
				flag = true;
			}
		}				
		(sum>0)?printf("%lld\n",sum):printf("%lld\n",-1*sum);
	}
	return 0;
}
 
