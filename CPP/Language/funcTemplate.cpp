/* Example Demonstrate using simple function templates
*/
#include <iostream>

//Demonstratin using templates
template <typename T1>
T1 printTwice(T1 num){
	return  num * 2;
}

template <typename T2>
void printThrice(T2 num){
	std::cout<< num * 3 << '\n';
}


//Demonstating array of templates
template <typename T3>
double getAverage(T3 array[],int n){
	T3 sum = T3(); //sum = 0

	for(int i=0;i<n;i++)
		sum += array[i];

	return double(sum)/n;
}

//Example: Pointer to template
template <typename T4>
double getAveragePtr(T4 *array,int n){
	T4 sum = T4(); //sum = 0

	for(int i=0;i<n;i++)
		sum += *(array+i);

	return double(sum)/n;
}

//Example: References in templates
template <typename T5>
void TwiceRef(T5 &a){
	a *= 2;
}

//Passing Reference Template....provided it was a parameter
template <typename T6>
T6& GetMax(T6& t1,T6& t2){
	if(t1 > t2) return t2;
	return t2;
}


int main(){

	int array[] = {100,200,300,400,500,600,700};
	float floatArray[] = { 1.55f,5.44f,12.36f};

	//Used for pointer based calls
	std::cout << getAveragePtr(&array[0],7) << '\n'; 
	std::cout << getAveragePtr(&floatArray[0],4) << '\n';


	//Used for array based calls
	std::cout << getAverage(array,7) << '\n'; 
	std::cout << getAverage(floatArray,4) << '\n';

	//Templates that return value
	std::cout << printTwice(2) << '\n';
	std::cout << printTwice(2.44) << '\n';	
	std::cout << printTwice(printTwice(2.44)) << '\n';	
	
	//Templates with void return type
	printThrice(2);
	printThrice(2.44);	

	//Template that alter the reference value
	int   a = 4;
	float b = 2.5f;

	std::cout <<"a :" << a << '\n';
	std::cout <<"b :" << b << '\n';

	TwiceRef(a);
	TwiceRef(b);

	std::cout <<"a :" << a << '\n';
	std::cout <<"b :" << b << '\n';

	//Setting the max value to zero
	int x = 50;
	int y = 64;
	std::cout <<"x : "<<x<<"y : "<<y<<'\n';
	GetMax(x,y) = 0; 
	std::cout <<"x : "<<x<<"y : "<<y<<'\n';	

	return 0;
}
