#include <iostream>
using namespace std ;
	class objfree{

		int x = 10 ;
	
		public :
		objfree(){
		cout<<"Constructor"<<endl;		
		}

		void fun(){
		cout<<"In Fun"<<endl;
		gun();
		}

		void gun(){
		cout<<"In Gun"<<endl;
		}
	};	

	int main(){

		objfree obj1 ;
		objfree *obj2 = new objfree();

		obj1.fun();
		obj2->fun();



		return 0 ;
	}

// Constructor
// Constructor
// IN Gun
// In Fun
// In Gun
// In Fun
