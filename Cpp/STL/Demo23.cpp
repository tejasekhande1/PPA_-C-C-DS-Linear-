// SET : automatically sort karto ; duplicate data not consider

#include <iostream>
#include <set>

int main(){

	std::set<int> s = {20,40,10,50,30,10};                      // same scenario for string

//	std::set<int,std::greater> s = {20,40,10,50,30,10};         // decending order madhe karto

	for(auto itr = s.begin() ; itr != s.end() ; itr++){
		std::cout<< *itr <<std::endl;
	}

	auto ptrname = s.find(20);
	s.erase(ptrname);

	return 0 ;
}
