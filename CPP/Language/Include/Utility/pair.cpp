/* Example: std::pair::pair
*  Constructs a pair object, involving construction of its two compoennt objects 
*/

#include <iostream> //std::cout
#include <utility>  //std::pair & std::make_pair
#include <string>   //std::string

int main(){
	std::pair <std::string,double> product1; //Default Constructor
	std::pair <std::string,double> product2 ("Product2",21.33); //Initializing constructor
	std::pair <std::string,double> product3 (product2); //Copy COnstructor

	product1 = std::make_pair(std::string("Product1"),12.33);

	product3.first = "Product3";
	product3.second = 34.99;

	std::cout << "The price of " << product1.first <<" : "<<  product1.second << '\n';
	std::cout << "The price of " << product2.first <<" : "<<  product2.second << '\n';
	std::cout << "The price of " << product3.first <<" : "<<  product3.second << '\n';
	
	return 0;
}
