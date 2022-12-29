// Unary (-)

#include <iostream>
using namespace std;

class Grade{
	int x ;
	public:
		Grade(int x){
			this->x = x ;
		}

		void disp(){
			cout<< x <<endl;
		}

	/*	friend void operator-(Grade& ref){
			ref.x = -(ref.x) ;
		} */

	/*	void operator-(){
			this-> x = -(this->x);
		} */

		int getX(){
			return x ;
		}
};

Grade operator-(Grade& ref){
	return Grade(-ref.getX());
}

int main(){
	Grade obj(10);
	obj.disp();                        // 10

	obj = -obj ;
	obj.disp();                        // -10

	return 0 ;
}
