#include<stdio.h>

/*A naive implementation of the 0-1 knapsack problem*/
/*
*  0-1  Meaning either take a item completely or reject it
*/

//Utitlity function that returns the maximum of two integers
int max(int a, int b){
	return (a>b)?a:b;
}

//Returns the maximum value that can be put into a knapsack of capacity W
int KnapSack(int W,int wt[],int val[],int n){
	//Base Case
	if( n==0 || W == 0) return 0;

	//if the weight of the last item is greater than the knapsack capacity, then this
	//item cannot be a part of the knapsack

	if(wt[n-1]>W) //i.e weight of last greater than the permitted weight
		return KnapSack(W,wt,val,n-1);
	else{ 
		//return the maximum of the two cases:
		//(1) nth item included
		//(2) not included

		return max(val[n-1]+KnapSack(W-wt[n-1],wt,val,n-1),
			KnapSack(W,wt,val,n-1));
	} 
}

//Driver program to test the above function
int main(){
	int val[] = {60,100,120};
	int wt[]  = {10,20,30};
	int W = 50;
	int n = sizeof(val)/sizeof(val[0]);
	printf("%d",KnapSack(W,wt,val,n));
	return 0;
}
