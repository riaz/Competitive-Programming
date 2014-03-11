#include <stdio.h>
#include <stdbool.h>

#define NUM 1000000
#define SIZE 3000000

int arr[SIZE];


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
	int T,temp;
	int n,a,b,c,d;
	int i;
	int sum;
	bool flag;
	scanf("%d",&T);
	while(T--){
		sum = 0;
		scanf("%d%d%d%d%d",&n,&a,&b,&c,&d);
		i=1;
		arr[0] = d;
		temp = n;
		while(--temp){
			arr[i] = ((arr[i-1]%NUM)*( (a*(arr[i-1]%NUM))%NUM + b) + c)%NUM;			
			i++;
		}
		
		quicksort(arr,0,n-1);
		flag = true;
		for(i=n-1;i>=0;i--){
			if(flag){
				sum+=arr[i];
				flag = false;
			}else{
				sum-=arr[i];
				flag = true;
			}
		}
		(sum>0)?printf("%d\n",sum):printf("%d\n",-1*sum);

	}
	return 0;
}
