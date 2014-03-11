#include <stdio.h>

int main(){
	char curr;
	char c;
	int count=0;
	int ans=0;
	curr = ' ';
	while((c=getchar())!='\0'){
		    if(c=='\n') break;
			if(curr == ' '){
				curr = c;
			}
			if(c == curr){
				count++;
			}
			else{
				if(count%2==0)ans++;
				curr = c;
				count = 1;
			}		
	}
	if(count%2==0)
		ans+= 1;
	printf("%d\n",ans);

	return 0;
}
