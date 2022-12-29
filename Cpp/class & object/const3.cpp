#include <iostream>
using namespace std;

class company {

	int empCount = 20 ;

	public :
	company(){
		cout<<"Constructor 1"<<endl;
	}

	company(int newCtr){
		cout<<"constructor 2"<<endl;
	}
};

int main(){
	company obj1;
	company obj2(10);

	return 0 ;
}

//in that case instance variable ha donni pn constructor mdhe initialize hoil
// bcoz apan 2 obj create kelet
//
// apan jar fakt "comany obj;" asa object create kela asta tr instance variable default constructor mdhe initialize zala asta
//
// ani "company obj(10);" asa object kela asta tr instance variable ha parameterized contructor mdhe initialize zala asta

