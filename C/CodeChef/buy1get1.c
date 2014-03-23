#include <stdio.h>
#define SIZE 201
#define MEM 256

int main(){
	int T,i;
	int arr[MEM]; //this is for memorization
	char str[SIZE];
	int count;
	scanf("%d\n",&T);
	while(T--){
		count = 0;
		//clearing the memorization array
		for(i=0;i<MEM;i++)
			arr[i] = 0;
		scanf("%s",str);
		i=0;
		while(str[i]){
			arr[str[i]]++;
			i++;
		}
		for(i='A';i<='z';i++){
			if(arr[i]&1) //i.e the count is odd
				count += arr[i]/2 + 1; //adding one for the non-pair			 
			else
				count += arr[i]/2;
		}
		printf("%d\n",count);
	}
	return 0;	
}
