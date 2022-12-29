#include <iostream>
using namespace std;

class FunOverload{

	public:

	void fun(int x){
		cout<<"Int"<<endl; 
	}

	void fun(const int x ){
		cout<<"Int-Const"<<endl;
	}
};

int main(){

	FunOverload obj;
	int x = 10;                           // Int
//	const int x = 10;			// Int-Const
	obj.fun(x);             

	return 0 ;
}

// Sadha integer ghetla tr Error yeto........Constant type var overload hot nahi........pointer nahitar reference use kelyavr error jato
