// Friend Function

#include <iostream>
using namespace std;

class C2W{
	int teacher = 0 ;
	int lang = 0 ;

	public:
	C2W(int teacher,int lang){
		this->teacher = teacher ;
		this->lang = lang;
	}
	void disp(){

		cout<< "Teachers is = "<< teacher <<endl;
		cout<< "Languages is = "<< lang <<endl;
	}

	friend void operator+(C2W& ref,int x){
		ref.teacher = ref.teacher + x ;
		ref.lang = ref.lang + x ;
	}

};

int main(){

	C2W obj1(2,6);
	obj1.disp();

	obj1 + 1 ;
	obj1.disp();

	return 0 ;
}
