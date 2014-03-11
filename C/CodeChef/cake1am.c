#include <stdio.h>
#define LBOUND 1
#define HBOUND 1001

typedef struct point{
	int x;
	int y;
}point;

int main(){
	int T,l1,l2;
	int area;
	scanf("%d",&T);
	point p1,p2;
	point p3,p4;
	while(T--){
		area = 0;
		scanf("%d%d%d%d",&p1.x,&p1.y,&p2.x,&p2.y);
		l1 = p2.x - p1.x;
		l2 = p2.y - p1.y;
		scanf("%d%d%d%d",&p3.x,&p3.y,&p4.x,&p4.y);		
		area += (p2.x-p1.x)*(p2.y-p1.y); //always direct
		
	if((p3.x> p2.x && p3.y > p2.y) || (p1.x> p4.x && p1.y > p4.y)){
		 //don't care				
	}		
	else if(p3.x < p2.x && p3.y < p2.y){
		area -= (p2.x-p3.x)*(p2.y-p3.y);
	}
	else if(p4.x > p1.x && p4.y > p1.y ){
		area -= (p4.x - p1.x)*(p4.y - p1.y);
	}
	area += (p2.x-p1.x)*(p2.y-p1.y);
	printf("%d\n",area);
	
	}	
	return 0;
}
