#include <stdio.h>

int main(){
	int a;int b;
	scanf("%d%d",&a,&b);	
	a-=b;
	if(a%10==9)a--;
	else
		a++;
	printf("%d\n",a);
	return 0;
}
