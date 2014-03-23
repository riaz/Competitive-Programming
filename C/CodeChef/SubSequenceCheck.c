#include<stdio.h>
/*
* Input: Take test cases from the user say: 1<=T<=100
*        Per test case accept a string(S) and possible subsequence(SSEQ) pair  1<=S,SEQ<=100 characters in length
*
* Output: Yes if the the subsequnce is validated else No 
*/

int main(void)
{
	int T;
	char str[100];
	char sseq[100];
	scanf("%d",&T);
	
	while(T--){
		scanf("%s %s",str,sseq);
		
		printf("%s\t%s\n",str,sseq);
	}
	return 0;
}
