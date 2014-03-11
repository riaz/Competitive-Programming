#include <stdio.h>
#include <stdbool.h>
char num[1000000];

char* disp(int start,int end){
	char tnum[1000000];
	int j = 0,i;
		for(i=start;i<end;i++){
			tnum[j] = num[i];
			j++;
		}	
		for(i=end;i>=start;i--){
			tnum[j] = num[i];
			j++;
		}
	tnum[j] = '\0';
	return tnum;
}

char * disprev(int start,int end){
	char tnum[1000000];
	int j=0,i;
	for(i=end;i>=start;i--){
			tnum[j] = num[i];
			j++;
		}
	tnum[j] = '\0';
	return tnum;
}

// char* rev(int start,int end){
// 	char tnum[1000000];
// 	int j = 0,i;
// 	int carry = 0;
// 	for(i=end;i<start;i--){
// 		tnum[j] = num[i];
// 		j++;
// 	}
// 	tnum[j] = '\0';
// 	return tnum;	
// }

int main(){
	int len;
	int T;
	scanf("%d",&T);
	while(T--){
		scanf("%s",num);
		if(strlen(num)%2 == 0)
			printf("%s %s\n",num,disp(0,1));	
			// printf("%s %s %s\n",num,disp(strlen(num)/2,strlen(num)),disprev(0,1));
		// else
		// 	printf("%s %s %s\n",num,disp(strlen(num)/2+1,strlen(num),true),disp(0,strlen(num)/2+1,false));
	}
	return 0;
}
