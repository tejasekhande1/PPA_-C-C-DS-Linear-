// Pure Virtual Destructor : 

#include <iostream>
using namespace std;

class Parent{
	public :
	
		Parent(){
			cout<<"In Parent Constructor"<<endl;
		}

		void Educate(){
			cout<<"Hard Work : Good Quality Education"<<endl;
		}

		virtual void Career() = 0 ;                   // Pure Virtual Function
	
		virtual void Marry() = 0 ;

		virtual ~Parent() = 0 ;			     // Pure Virtual Distructor
};
		Parent::~Parent(){
			cout<<"In Parent Destructor"<<endl;
		}

class Child : public Parent{
		public :

			void Career(){
				cout<< "Youtuber" <<endl;
			}

			void Marry(){
				cout<< "SoulMate" <<endl;
			}
		
			~Child(){
				cout<<"In Child Destructor"<<endl;
			}
};

int main(){

//	Parent obj;          // Error Abstract type parent

	Parent *obj = new Child();
	delete(obj);

	return 0 ;
}
