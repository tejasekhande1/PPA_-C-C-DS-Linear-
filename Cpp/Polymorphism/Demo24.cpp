// Constant Function

#include <iostream>
using namespace std;

class FunOverload{

	public:

	void fun(int x) const{
		cout<<"Constant"<<endl; 
	}

	void fun( int x ){
		cout<<"Normal"<<endl;
	}
};

int main(){

//	const FunOverload obj;			// Constant
	FunOverload obj;                         // Normal

	int x = 10;                           
	obj.fun(x);             

	return 0 ;
}
