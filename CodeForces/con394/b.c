#include <stdio.h>
#include <stdbool.h>

int arr[1000000];

int main(){
	int i,j,k,a,b;
	scanf("%d",&a,&b);
	for(i=0;i<a;i++){
		for(j=0;j<=9;j++){
			arr[i]=j;			
			for(k=0;k<a;k++){
				printf("%d",arr[k]);					
			}
			printf("\n");
		}
		arr[i]   = 0;
		arr[i+1] = 1;
	}
	
	return 0;
}


