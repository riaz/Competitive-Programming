//Domino.c

#include <stdio.h>
#define SIZE 3000

int main(){
	int N,i;
	char arr[SIZE],c;
	int count = 0;
	scanf("%d",&N);
	scanf("%s",arr);
	//Beginning
	for(i=0;i<N;){
		while(arr[i]=='R' || arr[i] == 'L'){
			i++;
		}
		if(i%2!=0) count++;
		//if L search R , else search L
		if(arr[i]=='L') c = 'R'; else c = 'L';
			
		j=i+1;
		while(arr[j]==c)j++;			
	}
	return 0;
}
