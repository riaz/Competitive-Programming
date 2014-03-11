#include <stdio.h>
#include <stdbool.h>

int main(){
	char c;
	int i=0;
	int a = 0;
	int b = 0;
	int x = 0;
	bool plus = false;
	bool eq = false;
	while((c=getchar())!='\0'){
		if(c=='\n') break;
		else if(c=='|' && plus == false){
			a++;			
		}
		else if(c == '+'){
			plus = true;
		}
		else if(c=='|' && plus == true && eq == false){
			b++;			
		}
		else if(c == '='){
			eq = true;
		}
		else if(c=='|' && plus == true && eq == true){
			x++;			
		}
	}
	// printf("%d %d %d",a,b,x);
	if(x == (a+b)){
		for(i=0;i<a;i++)
			printf("|");
		printf("+");
		for(i=0;i<b;i++)
			printf("|");
		printf("=");
		for(i=0;i<x;i++)
			printf("|");		
		printf("\n");
	}else if(x == (a+b)+2){
		for(i=0;i<a+1;i++)
			printf("|");
		printf("+");
		for(i=0;i<b;i++)
			printf("|");
		printf("=");
		for(i=0;i<x-1;i++)
			printf("|");
		printf("\n");
	}else if(x+2 == (a+b)){
		for(i=0;i<a-1;i++)
			printf("|");
		printf("+");
		for(i=0;i<b;i++)
			printf("|");
		printf("=");
		for(i=0;i<x+1;i++)
			printf("|");
		printf("\n");
	}else
		printf("Impossible\n");

	return 0;
}
