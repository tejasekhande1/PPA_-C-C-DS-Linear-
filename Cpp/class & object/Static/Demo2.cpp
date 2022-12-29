
#include <iostream>
using namespace std ;

class StaticDemo{

	public :
	const static int x = 20 ;            // Initialization not allowed in class without constant	
};

int main(){

	StaticDemo obj1 ;
	cout << obj1.x <<endl;
	return 0 ;
}

i
// Notes : Also not initialized by objects because ISO according standards apan value assigned keli ti saglya obj la manya nasel mhnun asa ahe
//         2) const static variable class mdhe chalta pn value change kartani error yeil
