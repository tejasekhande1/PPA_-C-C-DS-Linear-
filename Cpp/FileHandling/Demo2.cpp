
#include <iostream>
#include <fstream>
using namespace std;

int main(){

	ifstream infile("founders.txt");  	       // object creation
	string readData;

	while(infile){  		// for print whole data in file either print only bill

		getline(infile,readData);
//		infile >> readData ; 
		cout << readData << endl;;

	}
	
	return 0;
}

/* while(infile) or while(inline.eof() == 0) ------> endof chech stream is empty or not
 * data asel tr while(inline == 1) else (inline == 0)
 */
