#include <iostream>
using namespace std;

class accessDemo{
	
	int x = 10 ;
	static int y ;	

	public :
		void fun(){
			
			cout<< x <<endl;
			cout<< y <<endl;
		}
};

int accessDemo::y = 20 ;

int main(){

	accessDemo obj ;
	obj.fun();

	return 0 ;
}

// static member function mddhe fakt static variable chaltat.....non-static chalat nahi karan apan static function la class chya navane call karu shakto mhnun
// non-static member function mdhe static ani non-static variables access hotat
