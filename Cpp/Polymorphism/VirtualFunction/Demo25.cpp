// Pure Virtual Function : Child Compulsory override karnar asel tar PVF use kartat 
// Abstract Class : Class mdhe ek atri pure virtual function aste ; class cha object nasto ; child class chya function pure virtual nakoy

#include <iostream>
using namespace std;

class Parent{
	public :
		void Educate(){
			cout<<"Hard Work : Good Quality Education"<<endl;
		}

		virtual void Career() = 0 ;                   // Pure Virtual Function
	
		virtual void Marry() = 0 ;
};

class Child : public Parent{
		public :

			void Career(){
				cout<< "Youtuber" <<endl;
			}

			void Marry(){
				cout<< "SoulMate" <<endl;
			}
};

int main(){

//	Parent obj;          // Error Abstract type parent

	Parent *obj = new Child();
	obj->Educate();
	obj->Career();
	obj->Marry();

	return 0 ;
}
