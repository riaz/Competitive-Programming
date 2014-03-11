#include<stdio.h>
#include<math.h>

int max(int a){
	int max=0,i=0;
	while(a>0){
		if(a%10>max)
			max =  a%10;
		a/=10;
	}
	return max;
}

int convert(int num,int base){
	int sum=0;
	int index = 0;
	while(num>0){
		sum+=(num%10)*pow((float)base,(float)index);
		// printf("%f\n",pow(base,index));
		index++;
		num=num/10;
	}
	return sum;
}

main(){
	int T;
	int a,b;
	int lmax,rmax;
	scanf("%d",&T);
	while(T--){
		scanf("%d%d",&a,&b);
		lmax = max(a);
		rmax = max(b);
		printf("%d\n",convert(a,lmax+1)+convert(b,rmax+1));
	}
	return 0;
}
