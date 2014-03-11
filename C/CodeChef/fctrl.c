#include<stdio.h>
#include<math.h>

main(){

	int T,num,sum,power,temp;

	scanf("%d",&T);
	while(T--){
		scanf("%d",&num);
		sum = 0;
		power = 1;
		temp = 99999;
		while(temp>0){
			temp = num/pow(5,power);
			sum += temp;			
			power++;
		}
		printf("%d\n",sum);
	}

	return 0;
}
