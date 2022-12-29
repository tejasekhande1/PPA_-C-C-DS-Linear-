
// Exception Handling : depends on try,throw,catch
// 1] Synchronous : Can Be Handle
// 2] Asynchronous : Cannot Be Handle

// Daigram : 28 : 00
/* Try Block : Ja Code la Error yeu shakto to Try block madhe lihaycha ; exception detect ani throw karto ;
 * Catch Block : Handling Code for Exception ; parameter same nasle tr aborted() call karto          */

#include <iostream>
using namespace std;

int main(){

	cout<<"Start Main"<<endl;

	try {
		cout<<"In Try Block"<<endl;
		throw 1;
	} catch(int) {
		cout<<"In Catch Block"<<endl;
	}

	cout<<"End Main"<<endl;

	return 0 ;
}
