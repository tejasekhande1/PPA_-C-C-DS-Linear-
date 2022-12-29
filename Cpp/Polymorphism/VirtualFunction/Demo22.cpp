// Function Overiding : Return type matter karto , Fuunctoin name same pahije ; parameter pn same

#include <iostream>
using namespace std;

class Ambani{
	public :
		virtual void JIO(int x){
			cout<<"JIO-Network"<<endl;
		}
		virtual void Reliance(){
			cout<<"Reliance-Industry"<<endl;
		}
};

class Anant : public Ambani{
	public :
		int JIO(float f) override {
			cout<<"JIO-Mart"<<endl;
			return 10.5 ;
		}		
};

int main(){

	Ambani *obj1 = new Anant();
	obj1->JIO();

	return 0 ;
}

// Error------> Different Return Type
// Size of Short Data Type is 2 byte
// Override lihla tar virtual declare karu nahi...override virtual automatically karto
