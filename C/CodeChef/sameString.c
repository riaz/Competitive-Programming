#include <stdio.h>
#include <stdbool.h>

#define ALPHA 26

void printArray(int alpha[]){
	int i;
	for(i=0;i<ALPHA;i++)
		printf("%d",alpha[i]);
	printf("\n");
}

void clearArray(int alpha[]){
	int i=0;
	for(i=0;i<ALPHA;i++){
		alpha[i] = 0;
	}
}

bool isClearArray(int alpha[]){
	int i,j=0;
	for(i=0;i<ALPHA;i++){
		if(alpha[i] == 0)
			j++;
	}	
	if(j==ALPHA)
		return true;
	else
		return false;
}

int main(){
	int T,c;
	int alpha[ALPHA];
	scanf("%d\n",&T);	
	while(T--){
		clearArray(alpha);
		while((c=getchar())!=EOF){
			if(c=='\n')break;
			alpha[c-'a']++;
		}
		while((c=getchar())!=EOF){
			if(c=='\n')break;
				alpha[c-'a']--;							
		}
		if(isClearArray(alpha))
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}
