/* LEPERMUT */

#include <stdio.h>
#include <stdbool.h>
#define SIZE 100

int main(){
	int T,N,i,j;
	int arr[SIZE];
	int lcnt,gcnt;
	scanf("%d",&T);
	while(T--){
		lcnt = gcnt = 0;
		scanf("%d",&N);
		for(i=0;i<N;i++)scanf("%d",&arr[i]);
		for(i=0;i<N-1;i++){
			for(j=i+1;j<N;j++){				
				if(arr[i]>arr[j]){
					if(i+1 == j)lcnt++;
					gcnt++;
				}
			}
		}
		if(lcnt == gcnt)printf("YES\n");
		else printf("NO\n");
	}	
	return 0;
}
