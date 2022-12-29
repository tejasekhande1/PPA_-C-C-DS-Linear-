// Function OverRiding / Virtual Functions : 2 class and Objects

#include <iostream>
using namespace std;

class Parent{
	public:
		Parent(){
			cout<<"Parent Constructor"<<endl;
		}

		void career(){
			cout<<"Cs Engineer"<<endl;
		}

		virtual void marry(){                                     // for child method call....samja child kade method nasel tr parent kde jate
			cout<<"Dipika Padukone"<<endl;
		}
};

class Child : public Parent{
	public:
		Child(){
			cout<<"Child Constructor"<<endl;
		}

		void music(){
			cout<<"Music"<<endl;
		}

		void marry(){
			cout<<"Disha Patani"<<endl;
		}
};

int main(){

/*	Child obj;
	obj.career();
	obj.music();
	obj.marry();

	Parent obj1;
	obj1.career();
	obj1.marry();    */
	
	Parent *obj2 = new Child();
	obj2->career();
	obj2->marry();

//	Child *obj3 = new Parent();  ........... Error

	return 0 ;
}

// Scenario :
// parent		child
// Property		Property
// Carrer		Carrer
// Marri (X)		Marri (X)                 ........ Overiding
