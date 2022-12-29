#include <iostream>
using namespace std;

class AddTwo{
		int x = 10;
		int y = 20;
	public:
		void display(){
			cout<< x + y <<endl;         //  int operator+(int,int)
		}

		friend int operator+(AddTwo& ref1,AddTwo& ref2);
};

int operator+(AddTwo& ref1 , AddTwo& ref2){
	return ref1.x + ref2.x ;
}

int main(){

	int a = 50;
	cout<< a ;      // ostream operator<<(ostream& cout , int a)

	AddTwo obj1;
	AddTwo obj2;

	cout<< obj1 + obj2 <<endl;

	return 0 ;
}
