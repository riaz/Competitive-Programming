/*Program demonstrates the use of fast IO methods*/
//Implementation 1 
#include <stdio.h>
#define BUF 4096 //block size of disk is 4KBs

char ibuf[BUF];
int  ipt = BUF;

inline void fastRead(int *a){
	register char c = 0;
	while(c < 33) c = getchar();
	*a = 0;
	while(c>33){
		*a = *a*10 + c-'0';
		c = getchar();
	}
}

//Implementation 2
//Note: To be used with linux only, as getchar_unlocked belongs to posix api/standard
//      and is not a part of the original c library but is faster than getchar()
// inline void fastRead(int *a)
// {
//  register char c=0;
//  while (c<33) c=getchar_unlocked();
//  *a=0;
//  while (c>33)
//  {
//      *a=*a*10+c-'0';
//      c=getchar_unlocked();
//  }
// }

//Implementation 3
// Most of the methods mainly rely on the fact that reading in blocks from the disk is cheaper.
// This is because you avoid a lot of seek time which IO does. Hence firstly, read from the disk
// in blocks. After getting characters in bytes you can use simple translations into numbers etc.
// The standard libraries do lot of error checking which can be avoided in our case because we 
// know that the judge would not feed in arbitrary inputs. 
// Finally you can also use use getchar_unlocked functions. The IO has to lock mutex etc so as to
// prevent simultaneous reads from different threads. This can be avoided as there is only a 
// single thread.

int read_uint() {
while (ipt < BUF && ibuf[ipt] < '0') ipt++;
if (ipt == BUF) {
    fread(ibuf, 1, BUF, stdin);
    ipt = 0;
    while (ipt < BUF && ibuf[ipt] < '0') ipt++;
}
int n = 0;
while (ipt < BUF && ibuf[ipt] >= '0') n = (n*10)+(ibuf[ipt++]-'0');
if (ipt == BUF) {
    fread(ibuf, 1, BUF, stdin);
    ipt = 0;
    while (ipt < BUF && ibuf[ipt] >= '0') n = (n*10)+(ibuf[ipt++]-'0');
}
return n;
}

//Simple driver program
int main(){
	int a;
	fastRead(&a);
	// a=read_uint();
	printf("%d",a);
	return 0;
}


