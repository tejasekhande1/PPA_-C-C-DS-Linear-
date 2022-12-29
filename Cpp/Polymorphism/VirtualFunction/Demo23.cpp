// Function Overloading : Co-varient return type chalto ; pointer and reference ne object return karava lagto
// Function/Class override nasel kasarycha tr "final" lihaycha

#include <iostream>
using namespace std;

class PNG{

};

class PNGSons : public PNG{

};

class Parent{

	public:
		PNG obj ;
		virtual PNG* buyGold(){
			cout<<"Gold From PNG"<<endl;
			return &obj ;
		}
};

class Child : public Parent{

	PNGSons obj;
	public:
		PNGSons* buyGold (){
			cout<<"Gold From PNGSons"<<endl;
			return &obj ;
		}
};

int main(){

	Parent *obj = new Child();
	obj->buyGold();

	return 0 ;
}
