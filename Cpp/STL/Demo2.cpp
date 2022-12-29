// Vector Functionality :

#include <iostream>
#include <vector>

void showVector(std::vector<int> vec){
	for(auto itr = vec.begin() ; itr != vec.end() ; itr++){
		std::cout << *itr <<std::endl;
	}
}

int main(){
	
	std::vector<int> v = {10,20,30,40,50};

	// push_back
	v.push_back(60);

	//pop_back                     ------> last element delete karto
	v.pop_back();
	v.pop_back();

	//assign                       -------> full vector replace karto to 50 ne
//	v.assign(2,50);

	// insert
	v.insert(v.begin(),25);

	// erase
	v.erase(v.begin());

	showVector(v);

	//new vector
	std::vector<int> v1;
	v1.assign(5,55);

	// swap                     ----------> v1 madhe swap karto
	v.swap(v1);

	// clear
	v1.clear();

	showVector(v1);

	return 0 ;
}
