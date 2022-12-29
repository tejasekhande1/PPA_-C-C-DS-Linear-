#include <iostream>
	int main(){
		char ch = 'e';
			switch(ch){
				case 'a':
					std::cout<<"A Char"<<std::endl;
					break;

				case 'b':
					std::cout<<"B Char"<<std::endl;
					break;

				case 'c':
					std::cout<<"C Char"<<std::endl;
					break;

				default :
					std::cout<<"No Matching"<<std::endl;
					break;
				}
		
		return 0;
	}
