#include<stdio.h>
#include<math.h>
int main(){
	int T,i;
	int ax,ay,bx,by,cx,cy;
	double d1,d2,d3;
	int range;

	scanf("%d",&T);
	while(T--){
		//accepting range per test case
		scanf("%d",&range);
		scanf("%d%d",&ax,&ay);
		scanf("%d%d",&bx,&by);
		scanf("%d%d",&cx,&cy);
		
		d1 = sqrt((bx-ax)*(bx-ax) + (by-ay)*(by-ay));
		d2 = sqrt((cx-ax)*(cx-ax) + (cy-ay)*(cy-ay));
		d3 = sqrt((cx-bx)*(cx-bx) + (cy-by)*(cy-by));

		if(d1 <= range && d2 <=range){
			printf("yes\n");		
		}
		else if( (d1 > range && d2 <= range) || ( d1 <= range && d2 > range)){
			if(d3 <= range)
				printf("yes\n");
			else printf("no\n"); 
		}		
		else printf("no\n");
	}
	return 0;
}
