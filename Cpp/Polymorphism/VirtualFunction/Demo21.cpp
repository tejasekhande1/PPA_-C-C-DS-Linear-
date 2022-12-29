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
		void JIO(float f){
			cout<<"JIO-Mart"<<endl;
		}		
};

int main(){

	Ambani *obj1 = new Anant();
	obj1->JIO(10);

	return 0 ;
}

// JIO
