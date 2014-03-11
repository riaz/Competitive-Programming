#include <stdio.h>
#include <stdbool.h>
#define SIZE 50

// int gcd(int a,int b){
//     while(b>0){
//         a =b;
//         b = a % b;
//     }
//     return a;
// }

int lcm(int a, int b,bool flag){
	if(flag) return b;
	else{
		int temp1=a;
	    int temp2=b;
	    while(temp1!=temp2)
	    {
	        if(temp1>temp2)
	            temp1-=temp2;
	        else
	            temp2-=temp1;
	    }
	    return temp1;
	}
}

int main(){
	int T,num,i;
	int arr[SIZE];
	bool flag,init;
	scanf("%d",&T);
	int least;
	while(T--){
		flag = false;
		init = true;
		least=1;
		scanf("%d",&num);
		for(i=0;i<num;i++) arr[i]=0;		
		for(i=0;i<num;i++){
			scanf("%d",&arr[i]);
			least = lcm(least,arr[i],init);
			init = false;
		}
		for(i=0;i<num;i++){
			if((arr[i]%least) != 0){
				flag = true;
				break;
			}
		}
		if(!flag){
			for(i=0;i<num;i++){
				printf("%d ",arr[i]/least);
			}
		}else{
			for(i=0;i<num;i++){
				printf("%d ",arr[i]);
			}
		}
		printf("\n");
	}
	return 0;
}
