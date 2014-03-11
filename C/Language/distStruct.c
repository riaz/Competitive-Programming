#include <stdio.h>

/* This program demonstrate finding the distance between two points using a structure
*
*/

typedef struct{
	int x;
	int y;
}point;

// Or
// struct p{
// 	int x;
// 	int y;
// };
// typedef struct p point;

int distance(point a,point b){
	int dist=0,i;
	dist+=(a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y);
	return dist;
}

int main(){	
	point a,b;
	a.x = 1;
	a.y = 1;
	b.x = 5;
	b.y = 5;

	printf("Distance between a and b is: %d\n",distance(a,b));
	return 0;
}
