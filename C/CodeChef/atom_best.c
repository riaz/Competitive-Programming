#include<stdio.h>
#include<time.h>
 
typedef long long ll;
 
int main()
{
clock_t begin,end;
double time_elapsed;

int t;
ll n,k,m,res=1,t1=0,temp=0;
scanf("%d",&t);

begin = clock();
while(t--)
{
    t1=0;
scanf("%lld%lld%lld",&n,&k,&m);
res=m/n;
if(res>0){
        temp=k;
while(res>=temp)
{
    t1++;
    temp=temp*k;
    if(temp<0)
    break;
}
}
	printf("%lld\n",t1);
	end = clock();
	time_elapsed = (double)(begin-end)/CLOCKS_PER_SEC;
	printf("Time Elapsed: %lf\n",time_elapsed);
}
return 0;
}
