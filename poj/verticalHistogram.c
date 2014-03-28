#include <stdio.h>

int freq[26];

int main(void) {
	int i;
	int max;
	char c;
	max = 0;
	
	while((c=getchar())!=EOF){
		if(c < 65 || c > 97)continue; 
		else{
			freq[c-65]++;
			if(max<freq[c-65])max = freq[c-65];
		}
	}
	
    while(max>0){
		for(i=0;i<26;i++){
				if(freq[i] == max){
					printf("* ");
					freq[i]--;
				}
				else if(freq[i]==max && i == 0) printf("  ");
				else if(i>0 || i < 25)printf("  ");
		}
		max--;
		printf("\n");
	}
	printf("A B C D E F G H I J K L M N O P Q R S T U V W X Y Z\n");	
	
	return 0;
}
