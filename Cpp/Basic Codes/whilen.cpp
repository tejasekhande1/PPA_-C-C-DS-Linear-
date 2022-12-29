#include <iostream>

int main() {
	char ch = 'A' ;

	int i = 1 ;
	while ( i <= 5)
	{
		int j = 5 ;
		while(j>=i)
		{ 
			if((i==2 && j==2) || (j==2))
			{
				std::cout<< (int)ch ;
			}
		
			else
		{
			std::cout<< ch << " " ;
			ch++ ;
		
		}
			j-- ;
		}
	
		std::cout<<""<<std::endl;
		i++ ; 
	}
	
	return 0 ;
}
