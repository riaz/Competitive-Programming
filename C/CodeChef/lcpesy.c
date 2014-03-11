#include <stdio.h>
#include <stdlib.h>

#define DIGIT 10
#define IOFF 52
#define COFF 26

int main(){
	int *arr,i,T,c,count;
	scanf("%d\n",&T);
	while(T--){	
		count= 0;	
		arr = (int*)calloc(IOFF+DIGIT,sizeof(int));
		while((c=getchar())!=EOF){
			if(c=='\n') break;
			if(c>='a' && c<='z') arr[c-'a']++;
			else if(c>='A' && c<='Z') arr[COFF + c-'A']++;
			else if(c>='0' && c<='9') arr[IOFF + c-'0']++;
		}
		while((c=getchar())!=EOF){
			if(c=='\n') break;
			if(c>='a' && c<='z'){ if(arr[c-'a']!=0){ arr[c-'a']--; count++; } }
			else if(c>='A' && c<='Z'){ if(arr[COFF + c-'A']!=0){ arr[COFF + c-'A']--; count++;} }
			else if(c>='0' && c<='9'){ if(arr[IOFF + c-'0']!=0){ arr[IOFF + c-'0']--; count++;} }
		}
		printf("%d\n",count);		
	}
	return 0;
}
