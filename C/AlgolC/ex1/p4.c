#include <stdio.h>
#include "ex1.h"

#define SIZE 255
/* uses convert()*/

int main(){
	char arr[SIZE];
	char c;
	int i=0,j;

	scanf("%s",arr);
	
	printf("%d\n",convert(arr));
	return 0;
}

