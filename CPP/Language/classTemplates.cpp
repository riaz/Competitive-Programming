#include <iostream>

class Item{
	int Data;
public: 
	Item() : Data(0){		
	}

	void setData(int value){
		Data = value;
	}

	int getData(){
		return Data;
	}

	void printData(){
		std::cout << Data << '\n';
	}
};

//Consider a template implementation  for the above class
template<class T>
class Itemt{
	T data;
public: 
	Itemt(): data(T()){

	}

	void setData(T value){
		data = value;
	}

	T getData() const{ //const keyword for accessor functions
		return data;
	}

	void printData(){
		std::cout << data << '\n';
	}
};

int main(){
	Item item1;
	std::cout <<item1.getData() << '\n';
	item1.setData(20);
	item1.printData();

	//Above functinality using a templated class
	//This is how the class seems to be like
	//Itemt<int>:Itemt() - constructor
	//void Itemt<int>::setData(int) - setter
	//int Itemt<int>::getData() - getter
	//void Itemt<int>::printData() - printing

	Itemt<int> item2;
	std::cout <<item2.getData() << '\n';
	item2.setData(20);
	item2.printData();

	//But, Itemt being a template class, is flexible for the other types
	//This is how the class seems to be like
	//Itemt<float>:Itemt() - constructor
	//void Itemt<float>::setData(float) - setter
	//float Itemt<float>::getData() - getter
	//void Itemt<float>::printData() - printing
	
	Itemt<float> item3;
	std::cout <<item3.getData() << '\n';
	item3.setData(20.78);
	item3.printData();


	return 0;
}

