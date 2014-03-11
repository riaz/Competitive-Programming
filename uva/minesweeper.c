#include <stdio.h>
#define SIZE 100

int main(){
	int a,b;
	int i,j;
	int fldcount = 1,count;
	char arr[SIZE][SIZE];
	while(scanf("%d%d",&a,&b) != EOF){
		if(a==0 &&b==0)break;
		for(i=0;i<a;i++){
				scanf("%s",&arr[i]);
		}
		printf("Field #%d:\n",fldcount);
		for(i=0;i<a;i++){
			for(j=0;j<b;j++){
				count = 0;
				if(arr[i][j]!='*'){
					if(i-1 >= 0 && j-1 >= 0  && arr[i-1][j-1]=='*')
						count++;
					if(j-1 >= 0  && arr[i][j-1]=='*')
						count++;
					if(j-1 >= 0  && arr[i+1][j-1]=='*')
						count++;					
					if( i-1 >= 0 && arr[i-1][j]=='*')
						count++;					
					if(arr[i+1][j]=='*')
						count++;					
					if( i-1 >= 0 && arr[i-1][j+1]=='*')
						count++;					
					if(arr[i][j+1]=='*')
						count++;					
					if(arr[i+1][j+1]=='*')
						count++;																
					printf("%d",count);
				}
				else
					printf("*");					
			}
			printf("\n");
		}
		fldcount++;
		printf("\n");
	}
	return 0;
}
