#include <stdio.h>
#include <stdbool.h>

/*Slow Program but gives the correct output
*/

int main(){
	int T,i,num,temp;
	int arr[10],arr2[10];
	bool run;
	scanf("%d",&T);
	while(T--){
		num = 0;
		run = true;
		for(i=0;i<10;i++)scanf("%d",&arr[i]);
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
