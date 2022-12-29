// Class Template :

#include <iostream>
using namespace std;

template <class T>

class Template{

	T data;
	
	public : 
	T display(){
		return data ;
	}
};

int main(){

	Template<int> obj1;
	Template<double> obj2;

	cout<< sizeof(obj1) <<endl;    // 4
	cout<< sizeof(obj2) <<endl;    // 8

	return 0 ;
}
