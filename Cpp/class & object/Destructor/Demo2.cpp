#include <iostream>
using namespace std ;

class Demo{

	int *ptr ;                           // runtime la value allocate kartoy

	public :

	Demo(){
		cout<<"In Constructor"<<endl;
		ptr = new int ;
		*ptr = 20 ;
	}

	void fun(){
		Demo obj;
		cout<<"In Fun()"<<endl;
	}

	~Demo(){
		cout<<"In Destructor"<<endl;
		delete(ptr);
	}
};

int main(){

	Demo obj1 ;   		// obj1 delete karta yenar nahi karan tyacha scope purn main sampe paryant ahe
	obj1.fun();


//	Demo *obj2 = new Demo();
//	delete(obj2);

	return 0 ;
}
