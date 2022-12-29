#include <iostream>
using namespace std;

class FrdDemo ;
class Demo ;
class Access{
	public :
		void display(FrdDemo& ref, Demo& ref2);
};

class Demo{
	int y = 20;
	public:
		friend void Access::display(FrdDemo& ref,Demo& ref2);
};

class FrdDemo{
	int x = 10 ;
	public:
		friend void Access::display(FrdDemo& ref,Demo& ref2);
};

void Access::display(FrdDemo& ref,Demo& ref2){
	cout<< ref.x<<endl;
	cout<< ref2.y <<endl;
}

int main(){

	FrdDemo obj1;
	Demo obj3 ;
	Access obj2;
	obj2.display(obj1,obj3);
	
	return 0 ;
}
