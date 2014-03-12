#include <stdio.h>
#define SIZE 100005

inline void quicksort(int x[],int first,int last){
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

	long long count;
	
	scanf("%d",&T);
	
	while(T--){
		count = 0;
		scanf("%d",&num);
		for(i=0;i<num;i++){
			scanf("%d",&arr[i]); 
			if(arr[i] ==0 || arr[i] == 1){
				i--; 
				num--;
			}
		}		
		quicksort(arr,0,num-1);
		
		for(i=0;i<num;i++){
			j=i+1;
				while(arr[i] == arr[j])j++;					
					count+=((long long)num-(long long)j);			
		}
		printf("%lld\n",count);
		 				
	}
	return 0;
}
