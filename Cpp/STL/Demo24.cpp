// MULTISET : automatically sort and duplicate data consider

#include <iostream>
#include <set>

int main(){

	std::multiset<int> s = {20,40,10,50,30,10};                      // same scenario for string

	for(auto itr = s.begin() ; itr != s.end() ; itr++){
		std::cout<< *itr <<std::endl;
	}

	auto ptrname = s.find(10);                           // ekdach 10 delete karto
	s.erase(ptrname);

	for(auto itr = s.begin() ; itr != s.end() ; itr++){
		std::cout<< *itr <<std::endl;
	}

	return 0 ;
}
