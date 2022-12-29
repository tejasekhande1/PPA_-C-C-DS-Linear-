
// RETHROWING EXCEPTION :

#include <iostream>
using namespace std;

void fun(){
	try{
		cout<<"In Try - Fun"<<endl;
		throw "Exception";
	} catch(const char* str){                      // const nahi lihila tar to main kade jato
		cout<<"In Catch - Fun"<<endl;
		cout<< str <<endl;
		throw str ;                           // main chta catch() la call karto        -------> RETHROW
	}
}

int main(){

	try{
		cout<<"In Try"<<endl;
		fun();
		
	} catch(const char *str){
		cout<<"In Catch - Main"<<endl;
		cout<< str <<endl;
		
	}

	return 0 ;
}
