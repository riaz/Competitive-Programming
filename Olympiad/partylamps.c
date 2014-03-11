#include <stdio.h>
#include <stdbool.h>


bool arr[100][2];
int limit[] = {2,2,2,2}; //Possible phases and order doesn't matter	
int N;

bool check(int mode){
	int i;
	switch(mode){
		case 0:
			for(i=0;i<N;i++){
				if(arr[i][1]==false) return false;
			}
		return true;	
		case 1:
			for(i=0;i<N;i+=2){//only odd	
				if(arr[i][1]==false) return false;	
			}
		return true;	
		case 3:
			for(i=1;i<N;i+=2){//only odd	
				if(arr[i][1]==false) return false;	
			}
		return true;	
		case 4:
			for(i=1;i<N;i=3*i+1){//only odd	
				if(arr[i][1]==false) return false;	
			}
		return true;
	}
}

int main(){
	FILE *fin = fopen("partylamps.in","r");	
	int btn,x,i;
	// int N; //no of lamps

	fscanf(fin,"%d",&N);
	fscanf(fin,"%d",&btn);

	for(i=0;i<N;i++){ //All set to true by default
		arr[i][0] = true;
		arr[i][1] = true; //can be changed or not indicator			
	}

	while(fscanf(fin,"%d",&x) && x!=-1){//All ON
		arr[x][0] = true;
		arr[x][1] = false; //This index cant be changed
	}
	while(fscanf(fin,"%d",&x) && x!=-1){ //All OF
		arr[x][0] = false;
		arr[x][1] = false; //This index cant be changed
	}

	/** The original config of the lamps */
	printf("Original Configuration\n");
	for(i=0;i<N;i++){
		printf("%d",arr[i][1]);
	}
	printf("\n");
	/** The original config of the lamps */

	
	for(i=0;i<btn*4;i++%4){
		if(i==0 && limit[i]>0){
			printf("i==0 Check of i %d\n",check(i));
			//every thing is changed
			if(check(i)){
				for(i=0;i<N;i++){
					printf("%d",arr[i][0] = !arr[i][0]);
				}
				printf("\n");
			}
			else continue;			 
			limit[i]--;
		}
		else if(i==1 && limit[i]>0){
			//all odd lamps change
			if(check(i)){
				for(i=0;i<N;i++){
					if(i%2==0)
						printf("%d",arr[i][0]);
					else
						printf("%d",arr[i][0] = !arr[i][0]);						
				}
				printf("\n");	
			}else continue;

			limit[i]--;
		}else if(i==2 && limit[i]>0){
			//all
			if(check(i)){
				for(i=0;i<N;i++){
					if(i%2!=0)
						printf("%d",arr[i][0]);
					else
						printf("%d",arr[i][0] = !arr[i][0]);						
				}
				printf("\n");	
			}else continue;
			limit[i]--; 
		}else if(i==3 && limit[i]>0){ //1,4,7 pattern change
			if(check(i)){
				for(i=0;i<N;i++){
					if(i%3!=1)
						printf("%d",arr[i][0]);
					else
						printf("%d",arr[i][0] = !arr[i][0]);						
				}
				printf("\n");	
			}else continue;
			limit[i]--;
		}
	}
	printf("\n");

	// printf("%d %d",N,btn);
	return 0;
}
