#include <iostream>
#define MOD 1000000007
#define MAX 1000000

unsigned long long int fib[MAX];

using namespace std;

int main(){
	int T,i;

	cin>>T;

	fib[0] = 1;
	fib[1] = 2;
	//Not so good performance wise
	// for(i=2;i<MAX;i++){
	// 	fib[i] = (fib[i-1] + fib[i-2])%MOD;
	// }

	for(i=2;i<MAX;i++){
		fib[i] = (fib[i-1] + fib[i-2]);
		if(fib[i]>=MOD){
			fib[i] -= MOD;
		}		
	}

	while(T--){
		long int num,g,i;
		cin>>num>>g;

		unsigned long long int a = fib[num-1];//Note: num-1! is the no. of ways to climb num stairs
		int cnt = 0; // initializing the counter to zero initially
		while(a>0){  //we need to check the no. of 1's in a being equal to G or not
		             //if equal, correct else incorrect	
			if(a&1)cnt++;
			a>>=1;
		}
		if(cnt == g)
			cout << "CORRECT" <<endl;
		else
			cout << "INCORRECT" <<endl;
	}
	return 0;
}
