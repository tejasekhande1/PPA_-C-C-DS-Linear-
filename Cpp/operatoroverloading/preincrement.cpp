// preincrement ++x  ff :  operator++(Grade&)

#include <iostream>
using namespace std;

class Placement{
	int noOfComp ;
	public:
		Placement(int x){
			this->noOfComp = x ;
		}

		void disp(){
			cout<<"Total Company = " << noOfComp <<endl;
		}

	/*	friend void operator++(Placement& ref){
			ref.noOfComp = ++(ref.noOfComp) ;
		} */

	/*	void operator++(){
			this->noOfComp = ++(this->noOfComp) ;
		} */

		int getX(){
			return noOfComp;
		}
};

		Placement operator++(Placement& ref){
			int x ;
			x = ref.getX() ;
			return Placement(++x) ;
		}

int main(){

	Placement obj(5);
	obj.disp();

	obj = ++obj ;
	obj.disp();

	return 0;
}
