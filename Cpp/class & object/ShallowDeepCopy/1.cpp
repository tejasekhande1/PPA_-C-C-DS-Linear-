#include <iostream>
using namespace std;

class ShallowCopy{
	public :
		int x;
		int y;
		int *ptr;

		ShallowCopy(int x,int y){
			ptr = new int ;
			this->x = x ;
			this->y = y ;
		}

		void setValue(int p){
			*ptr = p ;
		}

		void display(){
		cout<< x <<" "<< y <<" "<< *ptr << endl;
		cout<< &x <<" "<< &y <<" "<< &(*ptr) << endl;
		}
};

int main(){

	ShallowCopy obj1(10,20);
	ShallowCopy obj2 = obj1 ;        // Copy Constructor

	obj1.setValue(30);

	obj1.display();
	obj2.display();

	return 0 ;
}
