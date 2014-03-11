#include<stdio.h>

/*Function to swap valued at two pointers*/
void swap(char *x,char* y){
	char temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

/*Function to print permutation of a string*/
// The function takes 3 parameters:
// 1. string
// 2. Starting index of the string
// 3. Ending index of the string

void permute(char *A,int start,int end){
	int j;
	if(start == end)
		printf("%s\n",A);
	else{
		for(j=start;j<=end;j++){
			swap((A+start),(A+j));
			permute(A,start+1,end);
			swap((A+start),(A+j)); //Backtrack						
		}
	}
}

//Driver Program
int main(){
	char a[] = "ABC";
	permute(a,0,2);	
	return 0;
}
