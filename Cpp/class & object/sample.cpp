#include <iostream>
using namespace std ;

	class uk {
		public :
		void printCountry(){          // member function
			cout<<"England,Wales,Scotland,Irland"<<endl;
		}
	};

	int main(){
		uk obj ;
		obj.printCountry();
		
		return 0 ;
	}
