// Quiz -> 1) Static fun or static obj cha use  ?
// 	   2) Singleton design pattern kasa lihila jato ?
// 	   3) Constructor private kelyavr apan object banu shakto ka ?
//Singleton Design Pattern : class cha ekch object banau shakto and ekdach constructor la call jatoi

#include <iostream>
using namespace std;

class Singleton{
	private :

		Singleton(){
			cout<<"Constructor"<<endl;
		}
	
	public :
	/*	static Singleton getObject(){
	
			static Singleton obj ;         // ekdach obj return karto
			return obj ;
		}   */

		static Singleton* getObject(){
			static Singleton *obj = new Singleton();
			return obj ;
		}
};

int main(){

	Singleton *ptr1 = Singleton::getObject();
	cout << ptr1 <<endl;

	Singleton *ptr2 = Singleton::getObject();
	cout << ptr2 <<endl;

//	Singleton obj1 = Singleton::getObject(); 
//	Singleton obj2 = Singleton::getObject(); 

	return 0 ;
}
