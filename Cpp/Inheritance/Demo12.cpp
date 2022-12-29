// Inheritance : Code cannot repeat , redandanci , Parent class kadun child kade kahi goshti ghene

#include <iostream>
using namespace std;

class Player{
	public:
		Player(){
			cout<<"Parent Constructor"<<endl;
		}

		void display(){
			cout<<"In Display"<<endl;
		}
		
		~Player(){
			cout<<"Parent Distructor"<<endl;
		}
};

class Cricket : public Player{
	public:
		Cricket(){
			//super()                        ------> Add By Compiler and Call to Constructor of Parent Class
			cout<<"Child Constructor"<<endl;
		}

		~Cricket(){                                 // Child cha destructor agodr call hoto
			cout<<"Child Destructor"<<endl;
		}
};

int main(){

	Player obj;

	Cricket obj1;
	obj1.display();

	return 0 ;
}

// Composition : mdhe apan kahi data change nahi karu shakat...teconstance ast
