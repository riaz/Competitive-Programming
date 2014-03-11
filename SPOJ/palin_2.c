#include <stdio.h>
#include <string.h>

char num[1000000];

void palin(char[] num){
	int i,len,j;
	len = strlen(num);

	if(len%2==0){
		j= len/2;
		for(i=j;i<len;i++){
			num[i] = num[j---1];
		}
	}else{

	}	
}

int main(){
	int T,i,j;
	char c;	
	scanf("%d",&T);
	while(T--){
		scanf("%s",num);
		palin(num);
		printf("%s\n",num);
	}		
	return 0;
}
