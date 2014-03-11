#include <stdio.h>

char num[100005];
int freq[10];
int main(){
	int T,i;
	int sum;
	scanf("%d",&T);
	while(T--){
		sum =0;
		for(i=0;i<10;i++)freq[i]=0;
		scanf("%s",num);
		i=0;
		while(num[i]!='\0'){
			freq[(num[i]-'0')]++;
			i++;
		}
		for(i=1;i<10;i++){
//			sum+=i*freq[i];
			printf("%d",freq[i]);
		}	
//		printf("%d\n",sum);
			printf("\n");
	}
	return 0;
}
