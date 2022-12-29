
#include <iostream>
using namespace std ;

class StaticDemo{

	public :
	static int x ;           
};

int StaticDemo::x = 20 ;

int main(){
	StaticDemo obj1 ;
	StaticDemo obj2 ;
	
	obj1.x = 30 ;
	cout<< StaticDemo::x <<endl;
	cout<< obj1.x <<endl;
	cout<< obj2.x <<endl;

	return 0 ;
}

// Static varible not a member of any object till end of initialized in outside the class . it is called by name of class
