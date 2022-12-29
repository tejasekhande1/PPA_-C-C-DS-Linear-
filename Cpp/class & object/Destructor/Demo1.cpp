#include <iostream>
using namespace std ;

class Demo{

	int x = 10 ;
	public :

	Demo(){
		cout<<"In Constructor"<<endl;
	}

	~Demo(){
		cout<<"In Destructor"<<endl;
	}
};

int main(){

	Demo obj1 ;   			      // obj1 delete karta yenar nahi karan tyacha scope purn main sampe paryant ahe
	Demo *obj2 = new Demo();
	delete(obj2);

	return 0 ;
}
