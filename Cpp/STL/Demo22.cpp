// DEQUE :

#include <iostream>
#include <vector>
#include <list>
#include <deque>

int main(){

	std::vector<int> v1 = {10,20,30,40,50};
	std::list<int> l1 = {100,200,300,400,500};
	std::deque<int> dq = {1000,2000,3000,4000,5000};

/*	for(auto itr = dq.begin() ; itr != dq.end() ; itr++){
		std::cout << *itr <<std::endl;
	}  */

	// operator[]
		std::cout << v1[2] <<std::endl;
//		std::cout << l1[2] <<std::endl;
		std::cout << dq[2] <<std::endl;

	// at()
		std::cout << v1.at(2) <<std::endl;
//		std::cout << l1.at(2) <<std::endl;
		std::cout << dq.at(2) <<std::endl;

	// back() and Front
		std::cout << v1.back() <<std::endl;
		std::cout << l1.back() <<std::endl;
		std::cout << dq.back() <<std::endl;

	return 0 ;
}
