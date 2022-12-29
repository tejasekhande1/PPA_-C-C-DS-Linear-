
// THIS SCENARIO ONLY VALID FOR PRIMITIVE DATA TYPE

#include <iostream>
using namespace std;

int main(){
	
	try{
		cout<<"In Try"<<endl;
		throw 'a';
	} catch(int){
		cout<<"Catch-Int"<<endl;
	} catch(float){
		cout<<"Catch-Float"<<endl;
	} catch(char){
		cout<<"Catch-Char"<<endl;
	}

	cout<<"End Of Main"<<endl;

	return 0 ; 
}
