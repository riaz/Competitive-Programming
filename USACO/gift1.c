/*
ID: riaz.201
LANG: C
TASK: gift1
*/

#include <stdio.h>

struct member{
	char name[14];
	int point;
};
struct member n1[10]; //since only 10 possible
int T;

int getIndex(char name[]){
	int i;
	for(i=0;i<T;i++){
		if(strcmp(name,n1[i].name)==0){
			return i;
		}
	}
	return -1;
}

int main(){
	FILE *fin  = fopen("gift1.in","r");
	FILE *fout = fopen("gift1.out","w");
	int i,j;
	int sum,count;
	char name1[14],name2[14];
	
	fscanf(fin,"%d",&T);
	for(i=0;i<T;i++){
		fscanf(fin,"%s",n1[i].name);
		n1[i].point = 0;	
	}
	for(i=0;i<T;i++){
		fscanf(fin,"%s",name1);
		fscanf(fin,"%d%d",&sum,&count);

		if(getIndex(name1)!=-1){
			if(count!=0)
				n1[getIndex(name1)].point += sum%count - sum;			
		}
		
		for(j=0;j<count;j++){
			fscanf(fin,"%s",name2);
			if(getIndex(name2)!=-1)
				if(count!=0)
					n1[getIndex(name2)].point += sum/count;			
		}						
	}

	for(i=0;i<T;i++){
		fprintf(fout,"%s %d\n",n1[i].name,n1[i].point);	
	}
	free(fin);
	free(fout);
	return 0;
}

