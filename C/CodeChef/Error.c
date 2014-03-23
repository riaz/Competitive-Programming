#include <stdio.h>
#include<stdbool.h>

int main(void) {
	int T;
	short i,j;
	bool flag;
	short test1[] = {0,1,0};
	short test2[] = {1,0,1};
	char c;
	scanf("%d",&T);
	while(T--){
		i=j=0;
		flag = false;
		while((c=getchar())!='\n'){
				if(c==test1[i]){
					i++;
				}else
					i=0;
				if(c==test2[j]){
					j++;
				}else
					j=0;
				if(i==3 || j==3)
				{
					flag = true;
					break;
				}
		}
		if(flag)
			printf("Good\n");
		else
			printf("Bad\n");
	}
	return 0;
}

