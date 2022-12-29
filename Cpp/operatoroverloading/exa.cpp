#include <iostream>
using namespace std;

class Demo{
	int x = 10 ;
	int y = 20 ;

	public :
/*	Demo(int x , int y){
		this->x = x ;
		this->y = y ;
	}
*/
	void disp(){
		cout<< x <<" ; " << y <<endl;
	}

	int getX(){
		return x ;
	}

	int getY(){
		return y ;
	}
};

Demo opeartor+(Demo& ref1,Demo& ref2){
	cout<< ref1.getX() + ref2.getY() <<endl;
}

int main(){

	Demo obj1;
	Demo obj2;
	
	obj1+obj2 ;
//	obj1.disp();

	return 0 ;
}
