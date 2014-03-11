//sort algorithm example using CPP
#include <iostream>   //std::cout
#include <algorithm>  //std::sort
#include <vector>     //std::vector

bool myfunction(int i,int j){ return (i<j); }

struct myclass{
	bool operator() (int i,int j) { return (i<j); }
}myobject;


int main(){
	int myints[] = {32,71,12,45,26,80,53,33};

	//Creating vector -> <32,71,12,45,26,80,53,33>
	std::vector<int> myvector(myints,myints+8); 

	//Using the default comparison operator '<'
	//Sorted Vector: <12,26,32,33,45,53,71,80> 
	// std::sort(myvector.begin(),myvector.end());  
	
	//Using  a function as the comparator
	//Semi-Sorted Vector: <12,32,45,71,26,80,53,33>	
	std:sort(myvector.begin(),myvector.begin()+4,myfunction); //Note: sorting applied to the first 4 values only

	//Using  a object as the comparator
	//Result: <12,32,45,71,26,33,53,80>
	std::sort(myvector.begin()+4,myvector.end(),myobject); // Note:  sorting applied to the remaining 4 values

	std::cout << "myvector contains:";
	for(std::vector<int>::iterator it = myvector.begin();it != myvector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << '\n';
	//printing out the contents
	
	return 0;
}
