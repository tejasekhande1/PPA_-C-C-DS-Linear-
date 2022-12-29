// REAL TIME EXAMPLE : TSUMANI ATTACK NEAR BY SEA VILLAGES

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int x;
	cout<<"Enter Number : "<<endl;
	cin >> x ;

	try{
		if( x < 0)
			throw "-Ve Value Entered" ;
		else
		cout<< "SquareRoot : " << sqrt(x) <<endl;

	} catch(const char *str){
		cout<<"Exception Catch : "<< str <<endl;
		cout<< "SquareRoot : " << sqrt(-x) <<endl;                             // Handling Code
	}

	return 0 ;
}
