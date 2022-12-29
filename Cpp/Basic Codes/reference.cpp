#include <iostream>
	int main() {
		int x = 10;
		int &y =x;
		std::cout<< x << y << std::endl;
		x= 20;
		std::cout<< &x << &y << std::endl;    //address (&)
		return 0;
	}
