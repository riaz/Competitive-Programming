#include <stdio.h>
#define SIZE 100000

int main(){
	int T,i,j,temp;
//	int arr[SIZE];
	unsigned long long num,num2;
	scanf("%d",&T);
	while(T--){
//		count=0;
		num2 = 0;
		scanf("%llu",&num);
		for(i=0;i<num;){ 
			/*scanf("%d",&arr[i]); 
			if(arr[i]==0 ||arr[i]==1 ){
				num--;continue;
			}
			if(arr[i]==2) num2++;
			else i++;*/							
			scanf("%d",&temp); 
			if(temp==0 ||temp==1 ){
				num--;continue;
			}
			if(temp==2) num2++;
			i++;
		}
				
		/*for(i=0;i<num-1;i++){
			for(j=i+1;j<num;j++)
			if((arr[i] + arr[j])!= 4)
				count++;				
		}*/
		printf("%llu\n",(num*(num-1)/2) - (num2*(num2-1)/2));
//		printf("%llu",num2);
	}
	return 0;
}
