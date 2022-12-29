// NEW/DELETE OPERATOR OVERLOADING

#include <iostream>
using namespace std;

class Demo{

	int golds;
	string country;

	public:
	Demo(string country,int golds){
		cout<<"In Constructor"<<endl;
		this->country = country;
		this->golds = golds ;
	}

	~Demo(){
		cout<<"In Distructor"<<endl;
	}

	void disp(){
		cout<< country<<" ; "<< golds <<endl;
	}

	void* operator new(size_t Dsize){           // static by default asta ; static void* operator asa pan chalta        
		cout<<"My Operator New"<<endl;
//		void *p = malloc(Dsize);   OR
		void *p = ::operator new(Dsize);
		return p ;                       
	}

};

/*
void* operator new(size_t Dsize){                       // Demo Size   // Operator New globally available asta
	cout<<"My Operator New"<<endl;
	void *p = malloc(Dsize);
	return p ;                      // address return kela jato ani obj1 mdhe implicit typecast karun store kela jato 
}

void operator delete(void* ptr){
	cout<<"My Operator Delete"<<endl;
	free(ptr);
}
*/

int main(){

	Demo *obj1 = new Demo("USA",39);             // void* Demo new(Sizeof(Demo))
	obj1->disp();
	delete(obj1);

	return 0 ;
}

// samja 2 new operator owerwrite kele asel tr te local new la call karto....but jar apan class mdhe malloc ne call nahi kela tr pahilyandi global new     la call jato tyanantr mg class mdhil overwrite kelelya new la call jato
// Static Function cha 1st parameter ha hidden this pointer nasta
// new operator overload member function ne kartani to fn la static smjto

/* OUTPUT -----
 * MY OPERATOR NEW
 * IN CONSTRUCTOR
 * USA
 * 39
 * IN DESTRUCTOR
 * MY OPERATOR DELETE
 */
