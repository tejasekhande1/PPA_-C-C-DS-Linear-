#include <iostream>
	int main() {

	int rows = 0 ;
	int cols = 0 ;

	std::cout<<"Enter No of Rows and Cols"<<std::endl;
	std::cin>> rows >> cols ;

	for (int i=1; i<=rows ; i++ )
		{
			for (int j= 1; j<=cols ; j++)
			{ 
				std::cout<<"* " ;
			}
		std::cout<<""<<std::endl;
		}
	return 0 ;
	}
