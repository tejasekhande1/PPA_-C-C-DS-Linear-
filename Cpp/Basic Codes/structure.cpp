#include <iostream>
int x = 10;
float f ;
char ch = 'A';
	void fun(){
		int y = 20;
		std::cout<< x << f << ch << y << std::endl;
	}
	void gun(){
		int p = 30;
		fun();
		std::cout<< x << f << ch << p << std::endl;
	}

	int main(){
		int z = 40;
		gun();
		std::cout<< x << f << ch << z <<std::endl;
		return 0;
	}
