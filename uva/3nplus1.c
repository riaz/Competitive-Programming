#include <stdio.h>

int main(){
	int a,b,maxcount,count,i;
	int num;
	while(scanf("%d%d",&a,&b) != EOF){
		maxcount = 0;
		if(a>b){
			b = a+b;
			a = b - a;
			b = b - a;
		}
		for(i=a;i<=b;i++){
			count=0;
			num = i;		
			while(num>1){
				if(num%2==0)num/=2;
				else
					num=num*3+1;
				count++;				
			}
			if(num==1)
				count++;
			if(count>maxcount)	
				maxcount = count;
		}	
		printf("%d %d %d\n",a,b,maxcount);	
	}
	return 0;	
}
