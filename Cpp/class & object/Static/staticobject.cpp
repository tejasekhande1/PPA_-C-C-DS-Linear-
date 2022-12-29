
#include <iostream>
using namespace std;

class Demo{
	public :
		Demo(){
		cout<<"In Constructor"<<endl;
	}
		void fun(){
		cout<<"In Fun"<<endl;
	}
		
		~Demo(){
		cout<<"In Destructor"<<endl;
	}

};

int main(){

	cout<<"Main Start"<<endl;

	Demo obj1 ;

	{
		static Demo obj2 ;
		obj2.fun();
	}
	
	obj1.fun();
	cout<<"Main End"<<endl;

	return 0 ;
}
