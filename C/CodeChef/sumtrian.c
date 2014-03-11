#include<stdio.h>

inline void fastRead(int *a){
	register char c = 0;
	while(c < 33) c = getchar();
	*a = 0;
	while(c>33){
		*a = *a*10 + c-'0';
     	 c = getchar();
	}
}

int arr[100][100];
int high;

int maxTrav(int i,int j,int max,int sum){
	if(i==max-1){
		sum += arr[i][j];
		if(sum>high) high = sum;
	}
	else{
			sum+= arr[i][j];
			maxTrav(i+1,j,max,sum);
			maxTrav(i+1,j+1,max,sum);
	}
	return high;
}

int main(){
	int T,i,j;
	int num,max;
	fastRead(&T);
	while(T--){
		fastRead(&num);
		for(i=0;i<num;i++){
			for(j=0;j<=i;j++){
				fastRead(&arr[i][j]);
			}
		}
		high=0;
		printf("%d\n",maxTrav(0,0,num,0));			
	}
	return 0;
}
