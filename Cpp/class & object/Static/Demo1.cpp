#include <iostream>
using namespace std ;

class StaticDem0{

};

void fun(){
	static int x = 10 ;     // static ekdach initialized hoto tyannatr to direct x++ hoto  i.e. static int x = 10 ekda initialise got mg x++ hota 
	x++ ;                   //  tyamule 12 , 13
	cout<< x <<endl;
}

int main(){

	fun();
	fun();
	fun();
	return 0 ;
}
