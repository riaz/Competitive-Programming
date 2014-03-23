#include <stdio.h>
#define MAX(a,b) ((a>b)?(a):(b))

int main(){
	int T,a,b;
	scanf("%d",&T);
	while(T--){
		scanf("%d%d",&a,&b);
		printf("%d %d\n",MAX(a,b),a+b);
	}
	return 0;
}
