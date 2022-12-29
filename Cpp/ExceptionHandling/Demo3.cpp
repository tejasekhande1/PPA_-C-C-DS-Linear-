#include <iostream>
using namespace std;

class Parent{
	public:
		Parent(){
			cout<<"In Constructor"<<endl;
		}
		Parent(Parent& ref){
			cout<<"In Copy Constructor"<<endl;
		}
		~Parent(){
			cout<<"In Destructor"<<endl;
		}
};
int main(){

	try{
		Parent obj;                              // Constructor nantr lagech Destructor la call karto
		throw obj ;
	} catch(Parent p){
		cout<<"In Catch Block"<<endl;
	}

	cout<<"End Of Main"<<endl;

	return 0;
}

// CONSTRUCTOR
// COPY
// DES
//COPY
// IN CATCH
// DES
// DES                          // End of main...automatically call destructor
// END OF MAIN
