
#include <iostream>
using namespace std;

class CopyDemo{
	int x ;
	public :

	CopyDemo(int x){
	this-> x = x ;
	cout<< x <<endl;
	}

	CopyDemo(const CopyDemo &ref){
	cout<< "Copy" <<endl;
	}

	CopyDemo fun(){
	CopyDemo obj(10);
	return obj ;
	}
};

int main(){
	CopyDemo obj1(20);
	CopyDemo obj2 = obj1 ;
	CopyDemo obj3 = obj2.fun();

	return 0 ;
}
