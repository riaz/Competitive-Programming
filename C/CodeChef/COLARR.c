#include <stdio.h>
#include <stdlib.h>

int max(int a,int b){ return a>b?a:b; }

int main(){
	int **paint,**point,*arr,*rowcount;
	int N,M,K,T,i=0,j;
	scanf("%d",&T);
	while(T--){
		scanf("%d %d %d",&N,&M,&K);
		arr = (int*)malloc(N*sizeof(int));
		//inputing the initial cell colors
		for(;i<N;i++)
			scanf("%d",arr+i);

		point = (int**)malloc(N*sizeof(int*));
		for(i=0;i<N;i++)
			*(point+i) = (int*)malloc(M*sizeof(int));

		for(i=0;i<N;i++){
			rowcount = *(point+i);
			for(j=0;j<M;j++)
			scanf("%d",rowcount + j);
		}

		paint = (int**)malloc(N*sizeof(int*));
		for(i=0;i<N;i++)
			*(paint+i) = (int*)malloc(M*sizeof(int));

		for(i=0;i<N;i++){
			rowcount = *(paint+i);
			for(j=0;j<M;j++)
				scanf("%d",rowcount + j);
		}

		for(i=0;i<N;i++){
			max = 0;
			for(j=0;j<M;j++){
				if(paint[i][j]<point[i][j]){
					
				}
			}	
		}


	}

	return 0;
}
