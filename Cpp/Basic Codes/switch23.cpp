#include <iostream>
	int main(){
		char ch = '+';
		int x = 10;
		int y = 20;
			switch(ch)
			{
				case '+':
					std::cout<<x+y<<std::endl;
					break;
			
		
		
			
			
				case '-':
					std::cout<<x-y<<std::endl;
					break;
		
			
				case '*':
					std::cout<<x*y<<std::endl;
					break;
			
				default :
					std::cout<<"in default case"<<std::endl;
					break;

			}
		return 0;
	}
