#include <iostream>
using namespace std;

class FunOverload{
	public:

	static void fun(int x){
		cout<<"Int"<<endl; 
	}

	void fun(int y ){
		cout<<"Int"<<endl;
	}
};

int main(){

	FunOverload obj;
	obj.fun(10);             

	return 0 ;
}

// Error...static matter karat nahi...
