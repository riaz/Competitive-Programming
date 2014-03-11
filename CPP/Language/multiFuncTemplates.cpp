#include<iostream>

template<class T1,class T2>
void printNumbers(const T1& a,const T2& b){
	std::cout << "First :  " << a << '\n';
	std::cout << "Second : " << b << '\n';
}

//Overloading on demand
template <class T3>
void show(T3 a){
	std::cout << "Display : " << a <<'\n';
}

//Explicit Template typing
template<class T4>
T4 max(T4 t1, T4 t2)
{
   if (t1 > t2)
      return t1;
   return t2;
}

//Function Template with no template arguments
template<class T5>
void printSize()
{
   std::cout << "Size of this type:" << sizeof(T5) << '\n';
}

//Function Template having a return type that cannot be deduced from the arguments passed
//i.e return variable created in the function body itself

template <class T6>
T6 SumOfNumbers(int a,int b){
	T6 t = T6();

	t = a + b;
	return t;
}

//Default Arguments with function templates
//Note: filter is the default argument in this case
template <class T7>
void PrintNumber(T7 array[],int array_size,T7 filter = T7()){
	for(int nIndex = 0;nIndex < array_size; nIndex++){
		if(array[nIndex] != filter)
			std::cout << array[nIndex];
	}
}

int main(){
	printNumbers(10,20);
	printNumbers(10,25.43f);
	printNumbers(99.9f,"Hello");	

	//Using function overloading on demand
	//i.e for a call say show(1234) , implicitly will call show(int a), what what if i wanted show(double a),
	//to explicitly specify which function to call using show<double>(num);

	show(1234); //calls show(int)
	show(12.34); //calls show(double)
	show<double>(1234); //calls show(double) - explicit

	//In this case only printNumbers<double,double>(const double& t1Data, const T2& t2Data)  will be instantiated
	printNumbers<double, double>(10, 100);    // int, int
	printNumbers<double, double>(14, 14.5);   // int, double
	printNumbers<double, double>(59.66, 150); // double, int
	
	// max(12,13); error: as template T is used as both the arguments,and compiler can generate for only 1 template	
	max<int>(12,13);    //This solves the above error, in which both are taken as int types
	max<double>(12,13); //same as above , except double

	//Method to call function template with no parameters
	// printSize(); //error, without explicit template spec
	std::cout << "Int : ";
	printSize<int>();
	std::cout << "Float : ";	
	printSize<float>();
	std::cout << "Char : ";	
	printSize<char>();
	std::cout << "Double : ";	
	printSize<double>();

	std::cout<<"Sum of Numbers Int :" << SumOfNumbers<int>(10,20) << '\n';
	std::cout<<"Sum of Numbers Float :" << SumOfNumbers<float>(10.5f,20.8f) << '\n';
	std::cout<<"Sum of Numbers Float :" << SumOfNumbers<double>(10.5,20.8) << '\n';

	int array[10] = {1,2,0,3,4,2,5,6,0,7};
	//Printing Numbers without filter
	PrintNumber(array,10);
	std::cout << '\n';
	//Printing Numbers with filter say zero
	PrintNumber(array,10,0);
	std::cout << '\n';	
	//Printing Numbers with filter say zero
	PrintNumber(array,10,6);
	std::cout << '\n';

	return 0;
}
