
// Exception Handling with Inheritance / Paren-Child Relation :

#include <iostream>
using namespace std;

class Parent{
	public:
		Parent(){
			cout<<"In Parent Constructor"<<endl;
		}
};

class Child : public Parent{
	public:
		Child(){
			cout<<"In Child Constructor"<<endl;
		}
};

int main(){

	Child obj;

	try{
		cout<<"In Try"<<endl;
		throw obj ;
	}catch(Parent p){                // INHERITANCE MDHE CHILD CHA OBJ THROW KELA TAR TO PARENT CHA REFERENCE DEU SHAKTO ; VICE VERSA ERROR
		cout<<"In Catch"<<endl;
	}

	cout<<"End Main"<<endl;

	return 0 ;
}

// INHERITANCE MADHE FIRST CHILD CHA CATCH BLOCK DECLARE KAARAVA TYANANTAR PARENT CHA CATCH BLOCK DECLARE KARAVA
