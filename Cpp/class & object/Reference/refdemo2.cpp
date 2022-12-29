#include <iostream>
using namespace std;

class refDemo {
	int x ;
	string refName;

	public :
	refDemo(int x , string refName){
		this-> x = x;
		this-> refName = refName ;
	}
	void display(refDemo &obj){
	cout<< this-> x <<" "<<this-> refName <<endl;
	cout<< obj.x <<" "<<obj.refName<<endl;
	}
};

int main(){

	refDemo obj1(20,"Rahul");
	refDemo obj2(10,"Ashish");
	obj2.display(obj1);
	
	cout << &obj1 << endl;
	cout << &obj2 <<endl;
	return 0 ;
}


// 10 Ashish 
// 20 Rahul 
