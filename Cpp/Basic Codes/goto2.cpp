#include <iostream>

int main() {
	std::cout<< "Goto statement"<<std::endl;

	goto goodafternoon ;
	
	std::cout<< "After goto statement" <<std::endl;

	goodafternoon :

	std::cout<<"Good Afternoon"<<std::endl;
	
	return 0 ;
}
