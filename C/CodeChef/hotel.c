/* HOTEL.c */
#include <stdio.h>
#define SIZE 100

int main(){
	int T,i,num,j;
	int max,ans;
	int arr[SIZE*2][2];	
	scanf("%d",&T);	
	while(T--){		
		scanf("%d",&num);
		for(i=0;i<num;i++){		      		 
                      scanf("%d",&arr[i][0]);
	              arr[i][1] = 1; //1 for arrival
                }
		for(i=num;i<num*2;i++){
                      scanf("%d",&arr[i][0]);
	              arr[i][1] = -1; //-1 for depart
		}		

	      
				
		for(i=0;i<2*num-1;i++){
			for(j=i+1;j<2*num;j++){
				if(arr[i][0] > arr[j][0]){
					arr[j][0] = arr[i][0] + arr[j][0];
					arr[i][0] = arr[j][0] - arr[i][0];
					arr[j][0] = arr[j][0] - arr[i][0];
					arr[j][1] = arr[i][1] + arr[j][1];
					arr[i][1] = arr[j][1] - arr[i][1];
					arr[j][1] = arr[j][1] - arr[i][1];					
				}
										
			}							
		}		

		ans = 0;
		max = 0;				
		for(i=0;i<2*num;i++){
			ans += arr[i][1];
			if(ans>max) max = ans;			
		}
		printf("%d\n",max);
				
	}
	return 0;
}

