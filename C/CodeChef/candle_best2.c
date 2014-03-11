#include<stdio.h>
int main()
{
int t,i,min1,min2,temp,a[10];
scanf("%d",&t);
for(;t>0;t--)
{
for(i=0;i<10;i++)
scanf("%d",&a[i]);
min1=min2=9;
for(i=8;i>=0;i--)
{
if(a[min1]==a[i])
{
temp=min1;
min1=i;
min2=temp;
}
if(a[min1]>a[i])
min1=min2=i;
}
if(min1==0 && min2==0)
{
temp=10;
for(i=0;i<a[min1];i++)
temp*=10;
printf("%d\n",temp);
}
else if(min1==0 && min2!=0)
{
for(i=0;i<a[min2]+1;i++)
printf("%d",min2);
printf("\n");
}
else
{
for(i=0;i<a[min1]+1;i++)
printf("%d",min1);
printf("\n");
}
}
return(0);
}