
// NESTED TRY CATCH :

#include <iostream>
using namespace std;

int main(){

	try{
		cout<< "In outer Try" <<endl;
		try{
			cout<<"In Inner Try - Try"<<endl;
			throw "Inner Try";
		} catch(const char *str){
			cout<<"In Inner Catch - Try"<<endl;
		}

		throw "Exception2";

	} catch(const char *str){
		cout<<"In Outer Catch"<<endl;
		cout<< str <<endl;
	}

	return 0 ;
}
