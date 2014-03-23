/* lecandy.c*/
#include <stdio.h>

int main(){
	int T,i;
	int N,C;
	int minReq,temp;
	scanf("%d",&T);
	while(T--){
		minReq = 0;
		scanf("%d%d",&N,&C);
		for(i=0;i<N;i++){
			scanf("%d",&temp);
			minReq+=temp; 
		}
		if(minReq<=C)
			printf("Yes\n");
		else
			printf("No\n");
	}
	

	return 0;
}
