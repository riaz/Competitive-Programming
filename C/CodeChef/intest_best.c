#include<stdio.h>
#define WINDOWS 1
#ifdef WINDOWS
	//no getchar_unlocked in windows so we just call getchar
	inline int getchar_unlocked(){ return getchar(); }
#endif

inline int read(){
	char c;
	int n=0;
	while((c=getchar_unlocked())<48); 
	n+=c-'0';

	while((c=getchar_unlocked())>48)
		n = n*10 + (c-'0');
	return n;

}

main(){
	unsigned int n,k,num;
	unsigned int count=0;
	n = read();
	k = read();
	while(n--){
		num = read();
		if(num%k==0)count++;
	}
	printf("%u\n",count);
	return 0;
}

