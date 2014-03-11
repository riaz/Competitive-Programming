#include <stdio.h>

/* Program to test if a year is a leap year or not*/

int main(){
	int yr;
	scanf("%d",&yr);
	if(yr%4==0 && yr%100!=0){
		printf("%d is a leap year\n",yr);
	}
	else if(yr%400 == 0)	
		printf("%d is a leap year\n",yr);
	else
		printf("%d is not a leap year\n",yr);
	return 0;
}
