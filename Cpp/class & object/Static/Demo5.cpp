#include <iostream>
using namespace std;

class virginGalentic{
	static int x ;

	public :
	static void spaceTour(){
	cout<<"Tour With Rechard Branson"<<endl;
		}
};

int virginGalentic::x = 1 ;

int main(){

//	virginGalentic obj ;
//	obj.spaceTour();

	virginGalentic::spaceTour();                              // OR

	return 0 ;
}

// static function la call karayla obj banavna compulsory nahi...tar class chyanavane call karu shakto
// Non-static sathi obj banvavch lagto
