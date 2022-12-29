// MultiLevel Inheritance : Eka class la ekach parent/base class 

#include <iostream>
using namespace std;

class Core2Web{

	public :
		Core2Web(){
			cout<<"C2W Constructor"<<endl;
		}

		~Core2Web(){
			cout<<"C2W Desstructor"<<endl;
		}
};

class Incubator : public Core2Web{

	public : 
		Incubator(){
			cout<<"Incubator Constructor"<<endl;
		}

		~Incubator(){
			cout<<"Incubator Desstructor"<<endl;
		}
};

class Startup : public Incubator{

	public : 
		Startup(){
			cout<<"Startup Constructor"<<endl;
		}

		~Startup(){
			cout<<"Startup Desstructor"<<endl;
		}
};

int main(){
	
	Startup obj;
	
	return 0 ;
}

