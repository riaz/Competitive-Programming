#include <stdio.h>

int main(){
	int T,count;
	int c;
	scanf("%d\n",&T);
	while(T--){	
		count = 0;
		while((c=getchar())!=EOF){
			if(c=='\n')break;
			if(c =='A'|| c == 'D' || c == 'O' || c == 'P' || c == 'Q' || c == 'R')
				count++;
			else if(c == 'B') count += 2;
		}
		printf("%d\n",count);
	}
	return 0;
}
