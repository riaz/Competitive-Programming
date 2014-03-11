#include <stdio.h>

int main(){
	int T,num;
	scanf("%d",&T);
	while(T--){
		scanf("%d",&num);
		printf("%d\n",num/2+1);
	}
	return 0;
}
