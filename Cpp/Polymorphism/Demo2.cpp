#include <iostream>
using namespace std;

class FunOverload{
	public:

	void fun(int x){
		cout<<"Int"<<endl; 
	}

	void fun(int x , float y = 10.5){
		cout<<"Int-Float"<<endl;
	}
};

int main(){

	FunOverload obj;
	obj.fun(10);

	return 0 ;
}

// Error Here...create ambiguity
