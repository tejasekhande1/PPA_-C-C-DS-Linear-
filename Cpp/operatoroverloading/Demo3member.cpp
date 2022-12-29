// Member Function  --------- operator+(int)     because hidden this pointer are their  (C2W* this,int)
// Normal Function --------- Yes. we should write getter function

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
/*	void operator+(int x){
		this->teacher = this->teacher + x ;
		this->lang = this->lang + x ;
	}    */
	int getTeacher(){
		return teacher;
	}

	int getLang(){
		return lang;
	}
};

C2W operator+(C2W& ref,int x){
	return C2W(ref.getTeacher() + x ,ref.getLang() + x); // C2W(2+x , 6+x)
}

int main(){

	C2W obj1(2,6);
	obj1.disp();

//	obj1 + 1 ;
	obj1 = obj1 + 1 ;
	obj1.disp();

	return 0 ;
}
