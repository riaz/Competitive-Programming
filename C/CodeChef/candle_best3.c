#include <stdio.h>
#include <stdbool.h>

int main(){
	int T,i,min,minx;
	int arr[10];
	bool flag;
	scanf("%d",&T);
	while(T--){
		min  = 9;
		minx = 0;
		flag = true;
		for(i=0;i<10;i++){
			scanf("%d",&arr[i]);
			if(arr[i]<=min){
				if(arr[i]<min){
					min = arr[i]; minx = i;
				}
				else if(arr[i]==min && flag){					
					min = arr[i]; minx = i;
					flag= false;
				}	
			}
		}
		if(minx == 0){
			printf("%.0f",pow((float)10,(float)(min+1)));
		}else{
			for(i=0;i<=min;i++)
			printf("%d",minx);					
		}
		printf("\n");
			}
	return 0;
}
