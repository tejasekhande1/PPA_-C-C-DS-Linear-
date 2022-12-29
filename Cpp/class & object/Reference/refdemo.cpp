#include <iostream>
using namespace std;

class refDemo {
};

int main(){

	int x = 10 ;
	int &ref = x ;
	
	cout<< x <<" "<< ref <<endl;

	int y = 20 ;
	ref = y ;

	cout<< y <<" "<<ref <<endl;
	
	return 0 ;
}

// 10 10
// 20 20
