
#include <iostream>
using namespace std;

int main(){
	
	try{
		cout<<"In Try"<<endl;
		throw 10;
	} catch(double){
		cout<<"Catch-Int"<<endl;
	} catch(float){
		cout<<"Catch-Float"<<endl;
	} catch(char){
		cout<<"Catch-Char"<<endl;
	} catch(...){
		cout<<"Catch-ALL"<<endl;
	}

	cout<<"End Of Main"<<endl;

	return 0 ; 
}

// catch(...){} -----> Hya block nantr kontach block declare karaycha nahi bcoz error yeto....
