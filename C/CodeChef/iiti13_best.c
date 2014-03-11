#include <stdio.h>
#include <stdlib.h>
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

int main(){
	int t;
	t=read();
	printf("%d",t);
	return 0;
}
