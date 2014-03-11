#include <stdio.h>
#include <stdbool.h>

#define SIZE 1000

int main(){
	int T,n,m,i;
	int temp;
	bool arr[SIZE];
	scanf("%d",&T);
	bool pass; //pass to chef
	while(T--){
		scanf("%d%d",&n,&m);
		pass = true;
		for(i=1;i<=n;i++)arr[i]=0;
		for(i=1;i<=m;i++){
			scanf("%d",&temp); arr[temp] = 1;
		}
		for(i=1;i<=n;i++){
			if(arr[i]==0 && pass){
				printf("%d ",i);
				arr[i]=1;
				pass = false;
			}else if(arr[i]==0 && !pass){
				pass = true;
			}		
		}
		printf("\n");
		for(i=1;i<=n;i++){
			if(arr[i]==0)
				printf("%d ",i);
		}	
		printf("\n");

	}
	return 0;
}
