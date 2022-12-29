#include <iostream>
using namespace std ;

class Company{
	int empCount=20 ;
	
	public :
	Company(){
		cout<< empCount <<endl;
	}

	void compName(){
		cout<<"Core2web"<<endl;
	}

};

int main(){
//	Company obj ;
//	obj.compName();

	Company *obj2 = new Company();
	obj2->compName();
	(*obj2).compName();

	return 0 ;
}


//output 
//
//20
//Core2web
