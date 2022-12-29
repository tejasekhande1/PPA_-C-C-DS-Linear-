#include <iostream>
int main() {
	int num ;
	char ch = 'y' ;
	
	do {
  		std::cout<<"Enter Your Number "<<std::endl;
		std::cin>> num ;
		
		int var = num ;
		int rem = 0 ;
		int rev = 0 ;
		while(num != 0){
		
			rem = num % 10 ;
			rev = rev*10 + rem ;
			num = num/10 ;
		}

		std::cout<<"Reverse of "<< var << "is "  << rev <<std::endl;

		std::cout<<"Do you Want to Continue : "<<std::endl;
		std::cin >> ch ;

	}

		while(ch == 'y' || ch == 'Y');
			


	return 0;
}

