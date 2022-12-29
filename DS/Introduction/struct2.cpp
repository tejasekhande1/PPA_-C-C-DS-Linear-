#include <iostream>

struct Player{
	std::string pName = "Rohit";
	int jerNo = 45;
	float avg = 38.61;
	char grade = 'A';
};

int main(){

	struct Player obj;
	std::cout << obj.pName <<std::endl;
	std::cout << obj.jerNo <<std::endl;
	std::cout << obj.avg <<std::endl;
	std::cout << obj.grade <<std::endl;

	return 0;
}
