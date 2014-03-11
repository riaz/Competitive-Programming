/*
ID: riaz.201
LANG: C
TASK: friday
*/

#include <stdio.h>
#include <stdbool.h>
#define BEGIN 1990

int freq[8]; //seven days of a week

bool isLeap(int yr){
	if(yr%4==0 && yr%100!=0){
		return true;
	}
	else if(yr%400 == 0)	
		return true;
	else
		return false;	 	  
}


int main(){
	int year,i,j,off;
	bool flag;
	FILE  *fin = fopen("friday.in","r");
	FILE *fout = fopen("friday.out","w");

	fscanf(fin,"%d",&year);
	off = 6;	
	for(i=BEGIN;i<BEGIN+year;i++){
		flag = false;
		for(j=1;j<=12;j++){
			// printf("Offset: %d\n",off);			
			if(j == 2){
				// printf("%d\n",isLeap(i));
				if(isLeap(i) == true){
					// printf("%d\n",29%7+off-1);
					freq[off]++;
					off = (29%7+off)%7;
				}
				else{
				 // printf("%d\n",28%7+off);	
				 freq[off]++;
				 off = (28%7+off)%7;
				}
			}
			else if(j==4 || j==6 || j==9 || j==11){
				freq[off]++;
				off = (30%7+off)%7;
			}
			else if(j==1){
				freq[off]++;
				off = (31%7+off)%7; 
			}else{
				freq[off]++;	
				off = (31%7+off)%7;
			}			 
		}				
	}
	for(i=0;i<7;i++){
		printf("%d ",freq[i]);
	}
	return 0;
}
