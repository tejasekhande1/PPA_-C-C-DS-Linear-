#include <iostream>
	int main() {
      		int i;

		for( i=1 ; i<=10 ; i++)
		{
			if(i % 2  == 0)
			{
				std::cout<<"DIVISIORS OF 50 =" << i<<std::endl;
			}
			else
			{
				std::cout<<"Odd ="<< i<<std::endl;
			}
		}

		return 0 ;
	}
