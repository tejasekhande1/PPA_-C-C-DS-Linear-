// Copy Constructor

#include <iostream>
using namespace std;

class Company{
		public:
		Company(){
		cout<<"No-Argu Constructor"<<endl;
		}

		Company(int x){
		cout<<"Paramaterized Constructor"<<endl;
		}

		Company(Company &obj){
		cout<<"Copy Constructor"<<endl;
		}
	};

int main(){
	Company obj1;
	Company obj2(10);
	Company obj3 = obj2 ;  // Syntax Copy Constructor
	Company obj4(obj1);	// Syntax Constructor
	return 0 ;
}

/* Note : tumhi tumchya class chya constructor la tumchach class parameter mhnun pathau shalat nahi i.e Company(Company obj) */
