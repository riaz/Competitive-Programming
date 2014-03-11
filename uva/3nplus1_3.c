#include <stdio.h>  
#define sz 1000000  
  
#define UL unsigned long  
UL tb[sz+1];  
UL calc(UL n){  
 if(n < sz){  
  if( tb[n] )  
   return tb[n];  
  if(n & 1)   
   return tb[n] = 1 + calc( n + (n << 1) + 1);  
  return tb[n] = 1 + calc( n >> 1);  
    
 }  
 if(n & 1)  
  return 1 + calc( n + (n << 1) + 1);   
 return 1 + calc( n >> 1);  
}  
int main(){  
 UL max,a,b,i;  
  
 max = 0;  
  
 tb[1] = 1;  
 while(scanf("%lu %lu",&a,&b) == 2){  
  printf("%lu %lu ",a,b);  
  if( a > b){  
   a ^= b ^= a ^= b;  
  }  
  max = 0;  
  for( i = a; i <= b; i++){  
   if( max < calc(i)){  
    max = tb[i];  
   }  
  }  
  printf("%lu\n",max);  
  
 }  
  
 return 0;  
} 