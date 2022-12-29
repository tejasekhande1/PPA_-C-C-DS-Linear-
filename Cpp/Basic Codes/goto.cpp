#include <iostream>
	int main(){
	
		int x = 7 ;

goodmorning :
		std::cout << "Good Morning" <<std::endl;
		std::cout << "Have A Nice Day"<<std::endl;
		x-- ;
	if (x > 5)
		goto goodmorning;
	
		return 0 ;
	}
