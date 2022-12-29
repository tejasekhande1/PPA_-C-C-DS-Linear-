#include <iostream>
int main() {
	int sum = 0 ;
//	int i ;

	for(int i=1 ; i<=10 ; i++) 
	{
		sum = (sum + i) ;
	}

	std::cout<<"Sum is "<< sum <<std::endl;

	return 0 ;
	
}
