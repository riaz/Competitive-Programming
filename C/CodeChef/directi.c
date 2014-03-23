#include <stdio.h>
#include <string.h>
int main(){
	int T,nl,i,j;
	char arr[40][50];
	char lst;
	scanf("%d",&T);
	while(T--){
		scanf("%d\n",&nl);
		for(i=0;i<nl;i++){
			gets(arr[i]);
		}
		lst = arr[nl-1][0];
		for(i=nl-1;i>=0;i--){
			if(i==nl-1){ //to be executed the first time
				printf("Begin");
				if(lst == 'R' || lst == 'r')j=5;else j=4;
					for(;j<strlen(arr[i]);j++)
						printf("%c",arr[i][j]);				
			}
			else if(i == 0){ //end of the string
				if(arr[i+1][0] == 'R' || arr[i+1][0] == 'r'){
					printf("Left");j=5;
				}else{ printf("Right");	j = 5;}
				for(;j<strlen(arr[i]);j++)
					printf("%c",arr[i][j]);
			}
			else{ //Rest Intermediate cases
				if(arr[i+1][0] == 'R' || arr[i+1][0] == 'r'){
					printf("Left");
					if(arr[i][0]=='R' || arr[i][0]=='r')
						j=5;
					else j = 4;
				}else{
					printf("Right");
					if(arr[i][0]=='R' || arr[i][0]=='r')
						j=5;
					else j = 4;
					
				}
				for(;j<strlen(arr[i]);j++)
					printf("%c",arr[i][j]);
				
			}
			printf("\n");
		}		
		printf("\n");
	}
	return 0;
}
