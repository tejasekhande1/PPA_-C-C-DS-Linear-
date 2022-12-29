// LIST : 

#include <iostream>
#include <list>

void showList(std::list<std::string> lst){
	for(auto itr = lst.begin() ; itr != lst.end() ; itr++){
		std::cout<< *itr <<std::endl;
	}
}

int main(){

	std::list<std::string> l1 = {"Apple","Amazon","Microsoft","Google","Facebook"};

	showList(l1);
	std::cout<< "===================" <<std::endl;

	l1.push_back("Uber");
	showList(l1);

	std::cout<< "===================" <<std::endl;

	l1.push_front("Udemy");
	showList(l1);

	std::cout<< "===================" <<std::endl;
	l1.pop_back();
	l1.pop_front();
	showList(l1);

	// insert
	std::cout<< "===================" <<std::endl;
	l1.insert(l1.begin(),"Adobe");
	showList(l1);

	// erase
	std::cout<< "===================" <<std::endl;
	l1.erase(l1.begin());
	showList(l1);

	//reverse
	std::cout<< "===================" <<std::endl;
	l1.reverse();
	showList(l1);

	//sort
	l1.sort();
	std::cout<< "===================" <<std::endl;
	showList(l1);

	//new list : merge                                   ---------> l2 mdhe merge hot
	std::cout<< "===================" <<std::endl;
	std::list<std::string> l2 = {"10","20","30","40","50"};
	l2.merge(l1);
	showList(l2);

	return 0 ;
}
