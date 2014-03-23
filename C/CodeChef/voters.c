/* VOTERS.c */
#include <stdio.h>
#define SIZE 1000000

int main(){
	int n1,n2,n3,i,temp,count;
	int arr[SIZE],max;
	count = 0;max=0;
	scanf("%d%d%d",&n1,&n2,&n3);
	for(i=0;i<SIZE;i++)arr[i]=0;
	for(i=0;i<(n1+n2+n3);i++){
		scanf("%d",&temp);
		if(temp>max)max = temp;
		if(arr[temp]==1)count++;
		arr[temp]++;
	}
	printf("%d\n",count);
	for(i=0;i<=max;i++){
		if(arr[i]>1)printf("%d\n",i);
	}
	return 0;
}
