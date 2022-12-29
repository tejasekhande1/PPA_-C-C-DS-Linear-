#include <iostream>
using namespace std;

class Demo{

	int x ;
	int y ;

	public : 
	
	Demo(){
		
	}

	Demo(int x , int y){
		cout<<"In Constructor"<<endl;
		this-> x = x ;
		this-> y = y ;
	} 

	void disp(){
		cout<< x <<endl;
		cout<< y <<endl;
	}

	int getX(){
		return x ;
	}

	int getY(){
		return y ;
	}
};

int operator+(Demo& ref1 ,Demo& ref2){
	return int(ref1.getX() + ref2.getY());
}

int main(){

	Demo obj1(10,20);
	Demo obj2(10,20);

	cout << obj1 + obj2 <<endl ;
	obj1.disp();

	return 0 ;
}
