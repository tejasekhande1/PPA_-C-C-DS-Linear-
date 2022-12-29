#include <iostream>
using namespace std;

	class Company {
	
		public:
		Company(){
			cout<<"No-arg Constructor"<<endl;
		}
	};

	int main(){

		Company obj1;
		Company *obj2 = new Company();
		return 0 ;

	}

// output
// No arg Constructor
// No arg Constructor
//
// Note :
// *obj2 - Includes in heap section because of "new"
