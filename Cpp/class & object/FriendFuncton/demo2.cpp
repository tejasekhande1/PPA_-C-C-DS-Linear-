// one friend function for multiple classes

#include <iostream>
using namespace std;

class Rajesh;
class Ashish{
	int laptop = 2 ;
	public :
	friend void lapAccess(Ashish& ref1 ,Rajesh& ref2);
};

class Rajesh{
	int laptop = 3 ;
	public :
	friend void lapAccess(Ashish& ref1 , Rajesh& ref2);
};

void lapAccess(Ashish& ref1 , Rajesh& ref2){
	cout<<ref1.laptop<<endl;
	cout<<ref2.laptop<<endl;
	cout<<ref1.laptop + ref2.laptop <<endl;
}

int main(){
	
	Ashish obj1 ;
	Rajesh obj2 ;

	lapAccess(obj1,obj2);

	return 0 ;
}
