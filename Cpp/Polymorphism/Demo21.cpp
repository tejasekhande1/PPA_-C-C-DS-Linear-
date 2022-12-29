#include <iostream>
using namespace std;

class FunOverload{
	public:

	void fun(int x){
		cout<<"Int"<<endl; 
	}

	void fun(int& x ){
		cout<<"Int-Ref"<<endl;
	}
};

int main(){

	FunOverload obj;
	
	int x = 10 ;                 // Error
//	obj.fun(x);     

	obj.fun(10);              //
	obj.fun(&x);              //

	return 0 ;
}

// Int
