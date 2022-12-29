// Static variables in static function

#include <iostream>
using namespace std;

class Demo{
	
	static int y ;

	public:
		static void fun(){
			static int z = 30 ;
			cout<< z <<endl;
			cout<< y <<endl;
		}
};

int Demo::y = 10 ;

int main(){
	Demo::fun();

	return 0 ;
}
