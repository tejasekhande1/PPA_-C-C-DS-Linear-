#include <iostream>
int main(){
	int sum = 0 ;
	int num = 325;
	int rem ;
	while (num != 0)
		{
			int rem = num % 10 ;
			sum = (sum + rem);
			num = num/10 ;
		}
	std::cout<<"The Sum is "<< sum <<std::endl;
	return 0 ;
}
