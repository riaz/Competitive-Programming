#include <stdio.h>
#define DIMENSION 2

/* This program demonstrates the finding of distance between two points
*  using an array implementation
*/

typedef int point[DIMENSION];

int distance(point a,point b){
	int dist=0,i;
	for(i=0;i<DIMENSION;i++){
		if(b[i]>a[i])
			dist+=(b[i]-a[i])*(b[i]-a[i]);
		else
			dist+=(a[i]-b[i])*(a[i]-b[i]);
	}
	return dist;	
}
int main(){
	point a,b;
	a[0] = 1;
	a[1] = 1;
	b[0] = 5;
	b[1] = 5;
	printf("Distance between a and b is: %d\n",distance(a,b));
	return 0;
}
