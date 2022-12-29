#include <iostream>
int main() {
	int i = 1 ;
	do {
		if(i % 2 == 0)
			std::cout<<"Even is "<< i <<std::endl;

		i++ ;
	}
	while(i<=20); 

	std::cout<<"Out of while"<<std::endl;
	
		
	return 0 ;
}
