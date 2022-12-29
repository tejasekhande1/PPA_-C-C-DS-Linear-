// Class Template :

#include <iostream>
using namespace std;

template <class T , class U>

class Template{

	T data;
	U floatData;
	
	public : 
	T display(){
		return data ;
	}
};

int main(){

	Template<int,double> obj1 ;
	cout << sizeof(obj1) <<endl;           // 16

	return 0 ;
}
