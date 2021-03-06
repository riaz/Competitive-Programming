/* pcycle.c */
#include <stdio.h>
#define SIZE 1000

int main(){
	int N,i,j,p;
	int arr[SIZE][SIZE]; //for saving the cycles per row
	int a[SIZE][2],start=0;
	int ccount=0;
	
	scanf("%d",&N); //Inputing the number to be permuted
	for(i=0;i<N;i++){
		scanf("%d",&a[i][0]);
		a[i][1] = 0; //meaning unvisited
	}

	for(i = start;i<N;){
		p=0;
		arr[ccount][p]=i+1;
	
		j=a[i][0];
		a[i][1] = 1; //marking visited
		while(i+1!=j){
                         a[j-1][1] = 1; //marking visted	 			 
                         p++;
			 arr[ccount][p]=j;                         
			 j = a[j-1][0];			 
		}
		p++;arr[ccount][p] = i+1;
		i = start+1;
		while(a[i][1]!=0)i++;		
		p++;
		arr[ccount][p] = -1; //kinda sentinal

		ccount++;				
	}
		printf("%d\n",ccount);
		for(i=0;i<ccount;i++){
			j=0;
			while(arr[i][j]!=-1){
				printf("%d ",arr[i][j]);j++;
			}		
		printf("\n");
		}
	return 0;
}
