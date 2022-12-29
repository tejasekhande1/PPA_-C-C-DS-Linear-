
// Exception Handling with Inheritance / Paren-Child Relation :

#include <iostream>
using namespace std;

class Parent{
	public:
		Parent(){
			cout<<"In Constructor"<<endl;
		}
		Parent(Parent& ref){
			cout<<"In Copy Constructor"<<endl;
		}
};

int main(){

	Parent obj;

	try{
		cout<<"In Try"<<endl;
		throw obj ;
	}catch(Parent p){
		cout<<"In Catch"<<endl;
	}

	cout<<"End Main"<<endl;

	return 0 ;
}
