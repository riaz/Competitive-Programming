#include <stdio.h>
#include <stdbool.h>

int main(){
	int T,i,num,temp,min;
	int arr[10],arr2[10];
	bool run;
	scanf("%d",&T);
	while(T--){
		num = 0;
		run = true;
		min = 9;
		for(i=0;i<10;i++){
			scanf("%d",&arr[i]);
			if(arr[i]<min) min = arr[i];
		};		
		if(min>0)num=1;
		while(min>0){
			num*=10;
			min--;
		}
		while(run){
			++num;
			for(i=0;i<10;i++)arr2[i]=0;
			temp = num;	
			while(temp>0){				
				arr2[temp%10]++;				
				if(arr2[temp%10]>arr[temp%10]){
					run=false;
					break;
				}
				temp/=10;								
			}	
		}
		printf("%d\n",num);	
	}
}
