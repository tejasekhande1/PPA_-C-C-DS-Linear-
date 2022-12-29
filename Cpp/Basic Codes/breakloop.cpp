#include <iostream>
	int main() {
		int num = 0 ;

		for (int i = 1 ; i<=10 ; i++)
		       {
		     	std::cout<<"Enter Even Number "<<std::endl;
		       	std::cin>> num ;
				
			if (num % 2 == 0)		
				std::cout<< num <<std::endl;
					
			else
				break ;
		       }
		std::cout<<"Out of loop "<<std::endl;

		return 0 ;
	}
