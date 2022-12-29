// using namespace std na lihinyacha reasoon : apan tharavik goshti use karto..tyamule sagla namespace gheun yenyachi garaj nahi...
// STL : Standard Template Library : Container ; Algorithms ; Iterator(Pointer) ; Daigram 17:30 ; 
// Container : 1] Sequence : Data in a Sequence : Vector(Dynamic Array) ; List ; Deque
// 	       2] Associative : Data sort in Decending or by default Accending : set ; multiset ; map ; multimap
// 	       3] Derived/Container Adapter : stack ; Queue ; PriorityQueue (Sort chi help ghyavi lagte mhnun derived mhntat)

// VECTOR : Continuosly Dynamic Memory Increases ; If break then Located on Another Place 

#include <iostream>
#include <vector>

int main(){

//	std::vector<int> v = {10,20,30,40,50};

	std::vector<int> v ;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	for(int i=0 ; i< v.size() ; i++){
		std::cout << v[i] <<std::endl;
	}

	std::vector<std::string> v1 = {"Apple","Facebook","Amazon","NetFlix","Google"};

	for(int i=0 ; i< v.size() ; i++){
		std::cout << v1[i] <<std::endl;
	}

	return 0 ;
}
