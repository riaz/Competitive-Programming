#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
              int n;
              scanf("%d",&n);
              if((n-1)%4==0)
                          printf("ALICE\n");
              else
                          printf("BOB\n");
    }
    return 0;
} 