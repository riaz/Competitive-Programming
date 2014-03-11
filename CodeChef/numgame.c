#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
              int n;
              scanf("%d",&n);
              if(n&1)
                          printf("BOB\n");
              else
                          printf("ALICE\n");
    }
    return 0;
} 
