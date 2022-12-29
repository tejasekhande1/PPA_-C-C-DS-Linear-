#include <iostream>
using namespace std;

class Template{

	public :

	template <typename T>

	void fun(T x){
		cout<<"Template : "<< x <<endl;
		}
	
	void fun(int x){
		cout<< "Int : " << x <<endl;
		}
};

int main(){

	Template obj;
	obj.fun(10);                // Overloaded Function la call karto

	return 0 ;
}

// Int : 10
