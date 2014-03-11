#include <string>
#include <vector>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <ctime>
#include <list>
#include <map>
#include <set>
#include <bitset>
#include <functional>
#include <utility>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string.h>
 
using namespace std;
 
typedef unsigned int uint;

const int maxn = 100 + 5;
const int maxa = 450 + 5;
const int maxsize = (maxn * maxa)/2;

int n,a[maxn];
uint f[(maxn+1)/2][(maxsize>>5)+1];

int main(){
	int testcases;
	for(scanf("%d",&testcases);testcases>0;testcases--){
		scanf("%d",&n);
		for(int i=0;i<n;i++)scanf("%d",&a[i]);
		sort(a,a+n);
		int sa = 0;
		for (int i=0;i<n;i++) sa+=a[i];
		cout<<sa<<'\n';
	}	
	return 0;
}
