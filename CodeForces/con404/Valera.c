#include <stdio.h>
#include <stdbool.h>

#define SIZE 300
int main(){
	int n,i,j;
	bool ok;
	char arr[SIZE][SIZE];
	char dig,nodig;
	int xcount,ycount;
	scanf("%d\n",&n);
	
	for(i=0;i<n;i++)scanf("%s",arr[i]);	
	ok = true;
	//Scanner
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			//printf("%c\n",arr[i][j]);
			if( (i == j) && (arr[i][j] != arr[0][0])){
				i=n-1;ok = false; break;
			}
			else if( (i != j)){
				if((j != n-i-1) && arr[i][j] != arr[0][1]){
					i=n-1; ok = false; break;
				}	
				else if( (j == n-i-1) && arr[i][j] != arr[0][0]){
					i=n-1; ok = false; break;
				}
				
			}		
		}
	}

	if(ok)printf("YES\n");
	else printf("NO\n");

	return 0;
}
