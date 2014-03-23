#include <stdio.h>
#define SIZE 52

int main(){
	int T,i;
	int c;
	int count;
	int arr[SIZE];
	scanf("%d\n",&T);
	while(T--){
		for(i=0;i<SIZE;i++)arr[i]=0;			
		count = 0;
		while((c=getchar())!='\n'){
			if(c>91){
				if(arr[c-71]%2==0)
					count++;					
				arr[c-71]++;
			}else{
				if(arr[c-65]%2==0)count++;
				arr[c-65]++;
			}
		}
		printf("%d\n",count);	
	}
	return 0;	
}
