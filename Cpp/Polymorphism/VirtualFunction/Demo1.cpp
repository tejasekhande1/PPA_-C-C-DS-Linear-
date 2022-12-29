// Virtual Function : 

#include <iostream>
using namespace std;

class Ambani{
	public :
		virtual void JIO(){
			cout<<"JIO-Network"<<endl;
		}
		virtual void Reliance(){
			cout<<"Reliance-Industry"<<endl;
		}
};

class Anant : public Ambani{
	public :
		void JIO(){
			cout<<"JIO-Mart"<<endl;
		}		
};

class Akash : public Ambani{
	public :
		void Reliance(){
			cout<<"Reliance-Digital"<<endl;
		}		
};

int main(){

	Ambani *obj1 = new Anant();
	obj1->JIO();
	Ambani *obj2 = new Akash();
	obj2->Reliance();

/*	// size without virtual keyword
	cout<< sizeof(Ambani)<<endl;          //   1     
	cout<< sizeof(Anant)<<endl; 		// 1
	cout<< sizeof(Akash)<<endl;		// 1    */

	// size with virtual keyword
	cout<< sizeof(Ambani)<<endl;          //   8     
	cout<< sizeof(Anant)<<endl; 		// 8
	cout<< sizeof(Akash)<<endl;		// 8

	return 0 ;
}

// virtual add kela tr hidden pointer auto add hoto..mhnun size 8 dakhavato.....compiler add karto pointer.....
// .bcoz object bane paryant thamb asa compiler mhnto.....inheritance mule saglya class chi size 8 byte yete....
// ani compiler *_vptr sobat Vtable (Virtual Table) / Dispatch table add karto.
