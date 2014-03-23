#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cctype>
#include<cstring>
#include<string>
#include<algorithm>
#include<stack>
#include<vector>
using namespace std;
 
int main()
{
    int tc;
    scanf("%d", &tc);
    while(tc--)
    {
         int n;
         scanf("%d", &n);
         int arr[n], dep[n];
         for(int i = 0;i<n; i++)
             scanf("%d", &arr[i]);
         for(int i = 0;i<n; i++)
             scanf("%d", &dep[i]);
         sort(arr, arr+n);
         sort(dep, dep+n);
         int i = 0,  j= 0, cnt =0 , max = 0;
         while(i < n)
         {
               if(arr[i] < dep[j])
               {
                     cnt++;
                     if(cnt > max)
                            max = cnt;
                     i++;
               }
               else
               {
                   cnt--;
                   j++;
               }
         }
         printf("%d\n", max);
    }
    return 0;
}
