#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define SIZE 1000000

char str[SIZE];

// bool quantifier(int mid,bool prop){
// 	int i,j;
// 	bool flag = false;
// 	j=0;
// 	for(i=mid,j=mid;i<strlen(str);i++){
// 		if(str[i] > str[j]) return false;
// 	}
// 	return true;
// }

int main(void) {
	int T,mid,i,carry,temp;
	scanf("%d",&T);
	while(T--){
		carry == '0';
		scanf("%s",str);
		if(strlen(str)%2 == 0){
			mid = strlen(str)/2-1;
			if(str[mid]<'9')
				str[mid]+=1;
			else{
				temp = mid;
				while(str[temp]=='9'){
					str[temp] = '0';
					carry = '1';
					temp--;
				}
				if(temp!=-1){
					str[temp] = str[temp]+1;				
					carry = '0';
				}
			}
			if(carry == '0'){
				for(i=0;i<=mid;i++)
				printf("%c",str[i]);
				for(i=mid;i>=0;i--)
				printf("%c",str[i]);
			}else{
				printf("1");
				for(i=0;i<mid;i++)
				printf("%c",str[i]);
				for(i=mid;i>=0;i--)
				printf("%c",str[i]);	
				printf("1");
			}
			
			}
		else{
			mid = (strlen(str)-1)/2;
			if(str[mid]<'9')
				str[mid]+=1;
			
			for(i=0;i<mid;i++)
				printf("%c",str[i]);
				for(i=mid;i>=0;i--)
				printf("%c",str[i]);
			
		}
		// printf("Mid : %c\n",str[mid]);
		printf("\n");
	}
	return 0;
}
