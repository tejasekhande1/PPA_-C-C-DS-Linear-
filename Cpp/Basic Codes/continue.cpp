#include <iostream>
int main() {
	int i ;

	for ( i= 1 ; i <= 100 ; i++)
	{
		if ( i % 5 == 0 && i % 15 == 0)	
			continue ;
		else
			std::cout<< i <<std::endl;
	}

	
		return 0 ;
}
