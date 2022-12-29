// extraction <<  ------  operator<<(ostream,Core2web)
// extraction/insertion madhe member function ne overloading hot nahi because member fn cha pahila parameter object cha ref nasto
// tr tithe ostream& asto ; also these are predefined
// member function la pahila parameter ha object lagato..nahitar error deto

#include <iostream>
using namespace std;

class Core2web{

	int langs;
	int noOfTeachers;

	public:
	Core2web(int langs,int noOfTeachers){
		this->langs = langs;
		this->noOfTeachers = noOfTeachers;
	}

	void disp(){
		cout<< langs <<endl;
		cout << noOfTeachers <<endl;
	}

/*	friend ostream& operator<<(ostream& cout,Core2web& ref){  // endl sathi 
		cout<< ref.langs <<endl;
		cout<< ref.noOfTeachers <<endl;

		return cout ;
	} */

	int getLangs(){
		return langs;
	}

	int getTeachers(){
		return noOfTeachers;
	}
};

	ostream& operator<<(ostream& cout,Core2web& ref){
		cout<< ref.getLangs() <<endl;
		cout<< ref.getTeachers() <<endl;
		return cout ;
	}


int main(){

	Core2web obj(7,2);
	obj.disp();

	cout<< obj <<endl;
	return 0 ;
}
