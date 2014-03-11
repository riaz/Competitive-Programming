#include <iostream>

/* Lets design a class that has two template types*/
template <class T1,class T2>
struct Pair{
	T1 first;
	T2 second;
};

template<class T3,class T4>
class nPair{
	T3 first;
	T4 second;	
public:
	nPair(): first(T3()),second(T4()){ //Default Constructor

	}
	nPair(const T3& t1,const T4& t2):first(t1),second(t2){ //parameterized constructor
	}
	//Note: In copy constructors only p1<int,int> can be copied to p2<int,int> and not p2<int,float>
	nPair(const nPair<T3,T4>& xpair):first(xpair.first),second(xpair.second){		//Copy Constructor
	}
	//comparison operator(==) implementation to compare two nPair types
	//Note: Similar to copy constructors, only p1<int,int> can be compared to p2<int,int> and not p2<int,float>

	// bool operator == (const Pair<T3,T4>& other) const{ //accessor function
	// 	return first == other.first && second == other.second;
	// }

	//Overloaded Relational Operators
	bool operator== (const nPair<T3,T4> Other) const  //==
	{
	  return first == Other.first && 
	         second == Other.second;
	}

	bool operator < (const nPair<T3,T4> Other) const //<
	{
		return first < Other.first && 
	           second < Other.second;
	}

	bool operator> (const nPair<T3,T4> Other) const //>
	{
		return first > Other.first && 
	           second > Other.second;
	}

	bool operator<= (const nPair<T3,T4> Other) const //<=
	{
		return first <= Other.first && 
	           second <= Other.second;
	}

	bool operator>= (const nPair<T3,T4> Other) const //>=
	{
		return first >= Other.first && 
	           second >= Other.second;
	}

	//Overloaded Assignment Operator
	void operator= (const nPair<T3,T4> Other)//=
	{
		first = Other.first; 
	    second = Other.second;
	}

	//Swap Operation
	void swap(nPair<T3,T4>& other){
		nPair<T3,T4> temp(0,0);
		//Making copy
		temp.first  = other.first; 
		temp.second = other.second;

		//Swap Phase 1
		other.first  = first;
		other.second = second;

		//Swap Phase 2
		first  = temp.first;
		second = temp.second;
	}

	//accessor or getter function
	void printValue(){ 
		std::cout << " First : "  << first << "Second : " << second << '\n';
	}

};

int main(){
	Pair<int,int> point1;

	point1.first = 10;
	point1.second = 20;

	std::cout << point1.first  << '\n';
	std::cout << point1.second << '\n';

	//similarly
	Pair<int,double> sqRoot;
	sqRoot.first  = 90;
	sqRoot.second =	9.4868329; 
	
	std::cout << sqRoot.first  << '\n';
	std::cout << sqRoot.second << '\n';

	nPair<int,int> point2(12,40);	
	nPair<int,int> point3(point2);
	nPair<int,int> point5(12,40);
	nPair<int,int> point6(16,70);
	nPair<int,int> point7(12,45);


	//Making use of the overloaded comparison operator '=='
	//Note: point3 is a copy of the point2
	if(point2 == point3)
		std::cout<< "Both are copies" << '\n';
	else
		std::cout<< "Both are not copies" << '\n';

	if(point6 < point2) 
		std::cout<< "Former lesser than latter" << '\n';
	else
		std::cout<< "Former greater than latter" << '\n';	

	if(point2 < point6) 
		std::cout<< "Former lesser than latter" << '\n';
	else
		std::cout<< "Former greater than latter" << '\n';	

	if(point2  <= point5) 
		std::cout<< "Former lesser than or equal to latter" << '\n';
	else
		std::cout<< "Former greater than latter" << '\n';	

	if(point2 == point6)
		std::cout << "Point2 is equal to Point6" << '\n';
	else
		std::cout << "Point2 is not equal to Point6" << '\n';

	if(point2 >= point5) 
		std::cout<< "Former greater than or equal to latter" << '\n';
	else
		std::cout<< "Former less than latter" << '\n';

	point6 = point2; //this makes point2 == point5 == point6

    if(point2 == point6)
		std::cout << "Point2 is equal to Point6" << '\n';
	else
		std::cout << "Point2 is not equal to Point6" << '\n';
	
	std::cout << "Before Swapping" << '\n';
	//Before Swapping point2 and point7
	// Point2
	std::cout << "Point2" << '\n';
	point2.printValue();	
	
	//Point7
	std::cout << "Point7" << '\n';	
	point7.printValue();

	point2.swap(point7);

	std::cout << "After Swapping" << '\n';	
	
	// Point2
	std::cout << "Point2" << '\n';	
	point2.printValue();	
	
	//Point7
	std::cout << "Point7" << '\n';	
	point7.printValue();

	return 0;
}
