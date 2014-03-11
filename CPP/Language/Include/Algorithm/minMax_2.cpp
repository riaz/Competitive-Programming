/* Include : <algorithm>
*1. minmax
*2. 
*
*
*
*/

#include <iostream>
#include <utility>
#include <algorithm>

typedef std::pair<int&, int&> my_pair;
	
template <class T> std::pair <const T&,const T&> myMinMax (const T& a, const T& b) {
  return (b<a) ? std::make_pair(b,a) : std::make_pair(a,b);
}

int main(){
	const my_pair result = myMinMax(2,6);
	std::cout << result.first << '\n';
	return 0;
}

