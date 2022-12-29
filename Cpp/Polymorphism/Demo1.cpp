/* Polymorphism : Behaviour Change with Same name but different parameters 
 	          Eka Functionality var multiple kame karayche astil tr used kartat 
   Name Magling : Changing name of same functions of one class in internally */

// Function Overloading : 

#include <iostream>
using namespace std;

class Parent{
	public:
		void fun(int x){                              // funi
			cout<<"fun-int"<<endl;
		}
		
		void fun(float y){				// funf
			cout<<"fun-float"<<endl;
		}
};

int main(){

	Parent obj;
	obj.fun(10);

	return 0 ;
}
