#include <stdio.h>
#define square(x) (x)*(x)
#define wsquare(x) x*x  //wrong  3+1*3+1 = 7
#define max(a,b)  ((a>b)?a:b)
#define dprint(expr) printf(#expr " = %g\n",expr )
#define cat(x,y)  x ## y
#define xcat(x,y) cat(x,y)

int main(){

	int a,b;
	int c = xcat(1,2);
	printf("%d\n"	,square(3+1));
	printf("%d\n"	,wsquare(3+1));	
	printf("%d\n"   ,max(2,3)); //ok

	a = 1; // ++a -> 2;
	b = 2; // ++b -> 3;

	printf("%d\n"   ,max(++a,++b));

	//Automatic Concatenation Example
	printf("Hello" "World\n");
	dprint(2/3);
	dprint(3/2);	

	//Implementation of the xcat macro
	printf("%d\n", xcat(1,2));
	printf("%d\n", c*2);

	return 0;
}
