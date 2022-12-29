#include <iostream>
using namespace std;

class Demo{

	int x = 10 ;
	int y = 20 ;

	public :

		void disp(){
			cout<< x <<endl;
			cout<< y <<endl;
		}

		int operator+(Demo& ref2){
			cout<< x + ref2.y <<endl;
			cout<< y + ref2.x <<endl;

			return Demo(int);
		}
};

int main(){
	
	Demo obj1;
	Demo obj2;

	cout<< obj1 + obj2 <<endl;

	return 0 ;
}
