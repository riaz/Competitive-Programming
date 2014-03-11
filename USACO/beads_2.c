#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define RMODE 'r'
#define BMODE 'b'
#define WMODE 'w'

char beads[700];
char temp[350];
int main(){
	int num,i;
	int count,max;
	bool rset = false;
	char mode;
	FILE *fin  = fopen("beads.in","r");
	FILE *fout = fopen("beads.out","w");
	fscanf(fin,"%d%s",&num,temp); //Beads count
	strcpy(beads,temp);
	strcat(beads,temp);	

	count = 0; // to be set to zero for every collection
	max = 0;   // stores the maximum value of such collection
	mode = ' '; //default
	for(i=0;i<num;i++){
		if(beads[i] == 'w'){
			count++;
		}else if(beads[i] == 'r' )
		{
			if(rset)
				count++;
			else{
				max = (count>max)?count:max;
				count = 0;
				rset = true;
			   }
		}
		else{
			if(rset){
				max = (count>max)?count:max;
				rset = false;
				count = 0;
			}else{
				count++;
			}			
		}

	}
	max = (count>max)?count:max; //when all are w
	printf("%d\n",max);
	return 0;
}
