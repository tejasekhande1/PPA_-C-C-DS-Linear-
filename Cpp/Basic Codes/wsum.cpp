#include <iostream>
int main() {
	int sum = 0;
	int i = 1 ;

	while( i<=10 )
	{
		sum = (sum + i);
		i++ ;
	}
	
	std::cout<< "Sum is "<< sum <<std::endl;
	return 0 ;
}
