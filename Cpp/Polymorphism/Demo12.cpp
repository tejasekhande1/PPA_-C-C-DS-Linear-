#include <iostream>
using namespace std;

class FunOverload{

	public:

	void fun(int x){
		cout<<"int"<<endl;
	}

	void fun(float x){
		cout<<"float"<<endl;
	}
};

int main(){

	FunOverload obj;

	obj.fun(10);
	obj.fun(10.5f);
	obj.fun('S');        // char la promote karto int madhe
//	obj.fun(10l);

	return 0 ;
}

// return type jari diff asla ani fun/para same asel tari pn error deto...return type matter nahi karat fun overload mdhe
// char : int,float
// long : no double , no float
