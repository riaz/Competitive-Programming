#include <stdio.h>
#include <stdbool.h>

int freq[26];

int main(){
	char c;
	bool nostop = true;
	int i;
	int count=0;
	while((c=getchar())!='\0'){
		if(c=='\n') break;
		freq[c-'a']++;
	}
	// for(i=0;i<26;i++){
	// 	printf("%d ",freq[i]);
	// }
	while(nostop){
		if((freq[4]-3)>=0 && (freq[8]-1)>=0  && (freq[13]-3)>=0  && (freq[19]-1)>=0 ){
			count++;
			freq[4]-=3;
			freq[8]-=1;
			freq[13]-=3;
			freq[19]-=1;
		}
		else nostop = false;
	}
	printf("%d\n",count);
	return 0;
}
