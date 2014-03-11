#include<stdio.h>
#include<stdlib.h>

/* Sherlock and Ciphers*/

main(){
	char *str;
	int  *arr;
	int num,T,i; 

	scanf("%d",&T);
	while(T--){
		scanf("%d",&num);
		str = (char*)malloc(sizeof(char));
		scanf("%s",str);
		arr = (int*)malloc(sizeof(int));		
		for(i=0;i<num;i++)
			scanf("%d",&arr[i]);

		printf("Number: %d\n",num);
		printf("Cipher: %s\n",str);
		// printf("Helper Array:");
		// for(i=0;i<num;i++)
		// 	printf("%d",arr[i]);
		printf("\n");

	}
	free(str);
	// free(arr);
	return 0;
}

