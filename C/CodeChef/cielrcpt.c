#include <stdio.h>

int bitCounter(unsigned int n) {   
   register unsigned int tmp;
   tmp = n - ((n >> 1) & 033333333333)
           - ((n >> 2) & 011111111111);
   return ((tmp + (tmp >> 3)) & 030707070707) % 63;
}

int main(){
	int T,p,count,x;
	scanf("%d",&T);
	while(T--){
			count=0;
			x = 11;
			scanf("%d",&p);			
			printf("%d\n",p=p/2048 + bitCounter(p%2048));
	}
	return 0;
}
