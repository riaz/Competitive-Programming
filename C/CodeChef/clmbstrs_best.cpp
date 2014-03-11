#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
#include <string.h>

using namespace std;

typedef long long int64;
typedef unsigned long long uint64;
#define two(X) (1<<(X))
#define twoL(X) (((int64)(1))<<(X))
#define contain(S,X) (((S)&two(X))!=0)
#define containL(S,X) (((S)&twoL(X))!=0)

const double pi =acos(1.0);
const double eps=1e-11;

template<class T> inline void checkmin(T &a,T b){if(b<a) a=b; }
template<class T> inline void checkmax(T &a,T b){if(b>a) a=b; }
template<class T> inline T sqr(T x){ return x*x; }

typedef pair<int,int> ipair;

#define SIZE(A) ((int)A.size())
#define LENGTH(A) ((int)A.length())
#define MP(A,B) make_pair(A,B)
#define PB(X) push_back(X)

const int MOD = 1000000007;
int f[1<<20];

main(){
	int f_size = sizeof(f)/sizeof(int);
	f[0] = f[1] = 1;
	for(int n=2;n<(1<<20);n++)
	{
		f[n] = f[n-2] + f[n-1];
		if(f[n]>=MOD) f[n]-=MOD;
	}
	cout<<"F array size:\t"<<f_size<<endl;
	for(irn n=2;n<)

	return 0;
}


