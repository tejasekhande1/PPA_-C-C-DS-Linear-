#include <iostream>
using namespace std ;
	class core2web {
		int studCount = 4000 ;    // instance variable or non static variable

		public :
		core2web(){               //manual constructor or non argument constructor

			cout<< "No-Argument Constructor" <<endl;
		}

		core2web(int newBatchStud){                  // same contructor cannot in a one class except different parameter
			cout<<"Prameterized Constructor"<<endl;
		}
	};
	

	int main(){

//		core2web obj ;
//		core2web() ;        // no output here
		core2web obj1;		// output "No-Arg Constructor"
		core2web obj2(10);    // output "Parameterized Constructor"

	return 0 ;
}
