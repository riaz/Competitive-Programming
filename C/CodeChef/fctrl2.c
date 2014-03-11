#include<stdio.h>

int prod[200];
int m;

void print(){
    int i;
    for(i=m-1;i>=0;i--){
        printf("%d",prod[i]);
    }
    printf("\n");
}


void fact(short int n){
    int num = n;
    m=0;
    int temp,x,i,j;
    while(n>0){
        prod[m] = n%10;
        n = n/10;
        m++;
    }    
    for(i=num-1;i>1;i--){
        temp=0;
        for(j=0;j<m;j++){
            x = prod[j]*i + temp;
            temp = x/10;
            prod[j] = x%10;
        }
        while(temp!=0){
            prod[m] = temp%10;
            temp = temp/10;
            m++;
        }
    }
}
 
int main()
{
    short int n,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        if(n<=0){
            printf("1\n");
        }else{
            fact(n);
            print();
        }
    }
    return 0;
}
 
