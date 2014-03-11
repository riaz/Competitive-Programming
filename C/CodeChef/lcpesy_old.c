#include<stdio.h>
#include<stdbool.h>

#define ALPHA 26
#define DIGIT 10

void clearArray(int alpha[],int size){
	int i=0;
	for(i=0;i<size;i++){
		alpha[i] = 0;
	}
}

bool isClearArray(int alpha[],int size){
	int i,j=0;
	for(i=0;i<size;i++){
		if(alpha[i] == 0)
			j++;
	}	
	if(j==size)
		return true;
	else
		return false;
}

void printArray(int alpha[],int size){
	int i;
	for(i=0;i<size;i++)
		printf("%d",alpha[i]);
	printf("\n");
}


int main(){
	int T,count1,count2,count3;
	int count;
	char c;
	int alpha1[ALPHA];
	int alpha2[ALPHA];
	int digit[DIGIT];
	
	scanf("%d\n",&T);
	while(T--){
		count=0,count1 = 0,count2=0,count3=0;
		clearArray(alpha1,ALPHA);
		clearArray(alpha2,ALPHA);
		clearArray(digit,DIGIT);
		
		while((c=getchar())!=EOF){
			if(c=='\n') break;
			if(0<=c-'a' && c-'a'<ALPHA){
				alpha1[c-'a']++;
			}else if(0<=c-'A' && c-'A'<ALPHA){
				alpha2[c-'A']++;
				
			}else if(0<=c-'0' && c-'0'<DIGIT){	
				digit[c-'0']++;
				
			}
		}
		
		printArray(alpha1,ALPHA);
		printArray(alpha2,ALPHA);
		printArray(digit,DIGIT);
		
		while((c=getchar())!=EOF){
			if(c=='\n') break;
			if(0<=c-'a' && c-'a'<ALPHA){
				alpha1[c-'a']--;
				count1++;
			}else if(0<=c-'A' && c-'A'<ALPHA){
				alpha2[c-'A']--;
				count2++;
				
			}else if(0<=c-'0' && c-'0'<DIGIT){	
				digit[c-'0']--;
				count3++;
				
			}
		}
		
		printf("%d%d%d\n",count1,count2,count3);
		if(isClearArray(alpha1,ALPHA)){
			count += count1;
		}
		if(isClearArray(alpha2,ALPHA)){
			count += count2;
		}
		if(isClearArray(digit,DIGIT)){
			count += count2;
		}
		printf("%d",count);
	}
	return 0;
}