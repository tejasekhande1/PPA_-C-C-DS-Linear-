#include <iostream>
int main() {
	char agree = 'y';
	do {
		int ch = 0 ;

		std::cout<<"Welcome\n "<<std::endl;
		std::cout<<"1: Shopping\n";
		std::cout<<"2: PVR\n";
		std::cout<<"3: Play Station\n";
		std::cout<<"4: Food Court\n";

		std::cout<<"Enter your Choice "<<std::endl;
		std::cin >> ch ;
		switch(ch){

			case 1 :
				std::cout<<"Wrogn,LP\n";
				break;
			case 2 :
				std::cout<<"Panipat\n";
				break;
			case 3 :
				std::cout<<"Football\n";
				break;
			case 4 :
				std::cout<<"Biryani\n";
				break;
			default :
				std::cout<<"Not Available\n";
		}		
		
		std::cout<<"Do want to continue : "<<std::endl;
		std::cin>> agree 	;
	}
	

	while(agree == 'y' || agree == 'Y');

	return 0 ;
}
