#include <stdio.h>
#define SIZE 100005

void quicksort(int x[],int first,int last){
    int pivot,j,temp,i;

     if(first<last){
         pivot=first;
         i=first;
         j=last;

         while(i<j){
             while(x[i]<=x[pivot]&&i<last)
                 i++;
             while(x[j]>x[pivot])
                 j--;
             if(i<j){
                 temp=x[i];
                  x[i]=x[j];
                  x[j]=temp;
             }
         }

         temp=x[pivot];
         x[pivot]=x[j];
         x[j]=temp;
         quicksort(x,first,j-1);
         quicksort(x,j+1,last);

    }
}

int main(){
	int T,n,i,j;
	int num;
	int arr[SIZE];

	int  count;
	int prev;

	scanf("%d",&T);
	
	while(T--){
		count = 0;
		scanf("%d",&num);
		for(i=0;i<num;i++)scanf("%d",&arr[i]); 
		quicksort(arr,0,num-1);

		prev = -1;
		j=0;
		for(i=0;i<num;i++){
			if(arr[i]==prev || arr[i] == 1)continue;
			else{
				arr[j]= arr[i];
				prev = arr[i];
				j++;
			}		 
		}
	
		printf("%d\n",(j*(j-1))/2); 				
	}
	return 0;
}
