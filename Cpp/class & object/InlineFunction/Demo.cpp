#include <iostream>
using namespace std;

inline int add(int num1 , int num2){
	
	return num1 + num2 ;
}

int main(){

	cout<< add(10,20) <<endl;      // inline mule ith direct 10 + 20 hot...stack frame push karaychi garaj nahi...performance fast hoto
	cout<< add(30,40) <<endl;

	return 0 ;
}

// Inline Function :1) Inline he compiler var depend ahe.....apan request karto ki Inline kar..but compiler ignore karu shakto
// 		    2) Loop sathi Inline la Compiler ignore karto...
// 		    3) Recursion : tyach gosthimadhun tyalach call dene mhnje recursion-------inline ignored here
// 		    4) Switch,goto inline ignored here also
// 		    5) Inline ignored for static variable
// Advantage :	    1) Fast Performence
// 		    2) Less time for copy values to their parameter
