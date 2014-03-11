#include <iostream>    //std::cout
#include <algorithm>   //std::min

template<class T> const T& myMin(const T& a, const T& b){
	return a>b?b:a;
}

template<class T> const T& myMax(const T& a, const T& b){
	return a>b?a:b;
}

int main(){

	//std::min
	std::cout << "myMin(12,11)==" << myMin(12,11) << '\n';
	std::cout << "myMin(11,12)==" << myMin(11,12) << '\n';
	std::cout << "min(1,2)==  " << std::min(1,2) << '\n';	
	std::cout << "min('a','x')==  " << std::min('a','x') << '\n';	

	//std::max
	std::cout << "myMax(12,11)==" << myMax(12,11) << '\n';
	std::cout << "myMax(11,12)==" << myMax(11,12) << '\n';
	std::cout << "max(1,2)==  " << std::max(1,2) << '\n';	
	std::cout << "max('a','x')==  " << std::max('a','x') << '\n';	


	return 0;
}
