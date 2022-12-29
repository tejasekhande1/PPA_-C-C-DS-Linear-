// Virtual Destructor : Inheritance mdhe virtul destructor use karava nahitar memory leak hou shakte ani pointer ne banvalela obj delete hou shakto 

#include <iostream>
using namespace std;

class Parent {

	public :
	Parent(){
		cout<<"Parent Constructor"<<endl;
	}
	
	virtual ~Parent(){
		cout<<"Parent Destructor"<<endl;
	}
};

class Child : public Parent {

	public :
	Child(){
		cout<<"Child Constructor"<<endl;
	}
	
	~Child(){
		cout<<"Child Destructor"<<endl;
	}
};

int main(){

	Parent *obj = new Child();   	// Output Only Constructor without virtual destructor
	delete obj ;

	return 0 ;
}
