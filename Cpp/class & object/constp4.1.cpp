#include <iostream>
using namespace std ;
	class objfree{

		int x = 10 ;
	
		public :
		objfree(){
		cout<<"No-Arg Constructor"<<endl;		
		}

		objfree(int val){
		cout<<"Para Constructor"<<endl;		
		}
	
		void fun(){
		cout<<"In Fun"<<endl;
		objfree *obj3 = new objfree(10);
		objfree  obj4;
		gun();

		delete (obj3) ;
		}

		void gun(){
		cout<<"In Gun"<<endl;
		objfree *obj5 = new objfree(20);
		objfree  obj6;

		delete (obj5) ;

		}
	};	

	int main(){

		objfree obj1 ;
		objfree *obj2 = new objfree(30);

		obj1.fun();
		obj2->fun();

		delete (obj2) ;

		return 0 ;
	}

