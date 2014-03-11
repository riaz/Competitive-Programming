/*
ID: riaz.201
LANG: C
TASK: ride
*/

#include <stdio.h>

int valued(char arr[]){
	int i=0;
	int sum = 1;
	while(arr[i]!='\0'){
		sum *= (arr[i]-'A' + 1);		
		i++;
	}
	return sum%47;
}

int main(){
	FILE *fin  = fopen("ride.in","r");
	FILE *fout = fopen("ride.out","w");
	char a[6],b[6];
	fscanf(fin,"%s%s",a,b);		
	if(valued(a)==valued(b))
		fprintf(fout,"GO\n");		
	else
		fprintf(fout,"STAY\n");
			
	exit(0);
}

