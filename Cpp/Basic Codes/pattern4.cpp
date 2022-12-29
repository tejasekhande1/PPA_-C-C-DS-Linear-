#include <iostream>

	int main() {
		for (int i = 1 ; i<= 4 ; i++) {
			for (int j = 1 ; j<=4 ; j++) {
				if (( i==1 && j==1) || (i==1 && j == 4) || ( i==4 && j==1) || (i==4 && j==4)) {
					std::cout<< "= ";
				}
				else {
					std::cout<< "* ";
				}
			}
			std::cout<<""<<std::endl;
		}
		return 0 ;
	}
