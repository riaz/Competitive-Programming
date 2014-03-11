#include <stdio.h>
#define SIZE 10000

char arr[SIZE+5];
char arr2[2*SIZE+10];
char worst[SIZE+5];

int main(){
	int T,len;
	int i,k,j,p,q;
	int ans;

	scanf("%d",&T);
	while(T--){
		fscanf(stdin,"%s",arr);
		strcpy(arr2,arr);
		strcat(arr2,arr);
		strcpy(worst,arr);
		ans = 0;
		len = strlen(arr);
		for(i=0,j=len-1;i<len;i++,j++){			
			p=0;
			q=i;
			for(k=i;k<len+i;k++)
				arr[p++] = arr2[k];			
			arr[p] = '\0';		

			if(strcmp(arr,worst)<0){
				strcpy(worst,arr);
				ans = q+1;
			}
		}	
		printf("%d\n",ans);

	}
	return 0;
}
