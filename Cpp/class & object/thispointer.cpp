#include <iostream>
using namespace std ;

	class BMW {
	
		int numSales = 0 ;
		public :
		BMW(){
		cout <<"Shear Driving Pleasure"<<endl;
		}

		BMW(int numSales){
//			this-> numSales = numSales ;        // hidden this pointer
			this.numSales = numSales ;
		}

		void display(){
			cout<< numSales <<endl;
//			cout<< this->numSales <<endl;
			cout << this.numSales <<endl;			
		}
	};

		int main(){
			BMW obj1 ;
			BMW *obj2 = new BMW(75) ;
			obj1.display();
			obj2->display();

			delete obj2; 

			return 0 ;
		}

	

