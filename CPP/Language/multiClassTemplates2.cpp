#include <iostream>

/*Using Non-type template arguments*/

//Possible choices for non-type template arguments -> restricted to integers only namely
// int, char, long, long long, unsigned variants and enums.
//floats and doubles are not allowed
//While only calling only, compile time integer constants can be passed
//Floats and double may be allowed if they can be converted to integer type readily

//Uses: Non-type arguments  can be  used to assign static const data-members of a class

template<class T,int SIZE>
class Array{
	// static const int Element_2x = SIZE * 2;
private:
	T t_array[SIZE];
public:
	Array(): T(){
		// for(int index=0;index<SIZE;index++)
		// 	t_array[index] = T();		
	}
	void Initialize()
	{ 
	    for(int nIndex = 0; nIndex < SIZE; ++nIndex)
	        t_array[nIndex] = T();
	}

	// void printArray(){
	// 	for(int index=0;index<SIZE;index++)
	// 		std::cout << t_array[index];
	// 	std::cout<<'\n';
	// }
};

int main(){

	Array<int,10> my_array();

	// my_array.Initialize();
	return 0;
}
