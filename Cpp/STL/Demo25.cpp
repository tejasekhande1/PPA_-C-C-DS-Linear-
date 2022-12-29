// MAP : 2 parameter ; duplicate key not access i.e {18,"Hardik"}

#include <iostream>
#include <map>

int main(){

	// 1st way

	std::map<int,std::string> player = {{18,"Virat"},{45,"Rohit"},{7,"Dhoni"}}; 

	for(auto itr = player.begin() ; itr != player.end() ; itr++){
		std::cout<< itr->first <<" : "<< itr->second<<std::endl;
	}

	std::cout<< "===========================" <<std::endl;

	// 2nd way

	std::map<int,std::string> player1 ;
	player1[18] = "Virat" ;	
	player1[7] = "MSD" ;	
	player1[45] = "Rohit" ;	

	for(auto itr = player1.begin() ; itr != player1.end() ; itr++){
		std::cout<< itr->first <<" : "<< itr->second<<std::endl;
	}

	std::cout<< "===========================" <<std::endl;

	// 3rd way
	
	std::map<int,std::string> player2 ;

	player2.insert(std::pair<int,std::string> (45,"Rohit"));
	player2.insert(std::pair<int,std::string> (7,"MSD"));
	player2.insert(std::pair<int,std::string> (18,"Virat"));

	for(auto itr = player2.begin() ; itr != player2.end() ; itr++){
		std::cout<< itr->first <<" : "<< itr->second<<std::endl;
	}

	return 0 ;
}

// 7 : Dhoni
// 18 : Virat
// 45 : Rohit
