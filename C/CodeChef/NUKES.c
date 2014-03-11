#include<stdio.h>
#define TOTAL 100

int main(){
	int a,n,k;
	int arr[TOTAL];
	int i,j;	
	scanf("%d%d%d",&a,&n,&k);
	for(i=0;i<k;i++) arr[i]=0;

	// for(i=0;i<k;i+=n){
	i=0;
	while(a>0){
		if(a<=n){
				arr[i] = a;
				break;
		}
		if(arr[i]<n){
			arr[i]=n;	
		}
		else{
			arr[i] = n-1; 
			j=i+1;
			while(j<k){
				if(arr[j]+1>n)
					j++;
				else{
					arr[j]++;
					break;
				}
			}
		}		
		a-=n;
	}
	// }

	for(i=0;i<k;i++){
		printf("%d ",arr[i]);
	} 
	return 0;
}
