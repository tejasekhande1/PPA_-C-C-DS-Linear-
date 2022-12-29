// TEMPLATE SPECIALIZATION :

#include <iostream>
using namespace std;

class Template{

	public :

	template<typename T>

	void fun(T x){
		cout<<"Template"<<endl;
	}

	template<> 			// TEMPLATE SPECIALIZATION
	void fun(int x){
		cout<<"Int Specific"<<endl;
	}
};
	
int main(){
	
	Template obj;
//	obj.fun(10);                 // Int Specific
	obj.fun<int>(10);	    // Template [ jar apan Template specialization use kela tr ]

	return 0 ;
}
