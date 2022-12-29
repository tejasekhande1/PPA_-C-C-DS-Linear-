#include <iostream>
using namespace std ;
	class bigBazar {

		int numProd = 800 ;
		
		public :	
		bigBazar(){
			cout<<"No Argument"<<endl;
		}
	
		bigBazar(int list){
			cout<<"Parameterized Constructor"<<endl;
		}

		void bill(){
			cout<<"Pay Bills"<<endl;
		}
	};

int main(){

	bigBazar obj1;
	bigBazar obj2(10);

	obj1.bill();
	obj2.bill();

	return 0 ;
}


//output
//
//no Argument
//Parameterized Constructor
//pay bills
//pay bills
