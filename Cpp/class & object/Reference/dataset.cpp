#include <iostream>
using namespace std;

class Dataset{
	int numData ;
	string typeData ;

	public :
	Dataset(){
	cout<<"Dataset"<<endl;	
	}

	void infoData(int numData,string typeData){
	
	this->numData = numData;
	this->typeData = typeData;

	cout<<numData<<endl;
	cout<<typeData<<endl;

	}
};

	int main(){

		int numData;
		string typeData;

		cout<<"Enter Info : "<<endl;
		cin>>numData;
		cin>> typeData;

		Dataset obj;
		obj.infoData(numData,typeData);

		return 0 ;
	}

/* output
 * Dataset
 * numData (Value)
 * infoData (Value)
 */
