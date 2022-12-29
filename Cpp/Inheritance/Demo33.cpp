// Multiple Inheritance : 
// Daimond Problem in Inheritance : use virtual keyword for minimize daimond problem in Main Parent Class


#include <iostream>
using namespace std;

class Shashi{
	public :
		Shashi(){
			cout << "Shashi Constructor"<<endl;
		}
		~Shashi(){
			cout << "Shashi Destructor"<<endl;
		}
};

class Core2Web : public virtual Shashi{

	public :

		Core2Web(){
			cout<<"C2W Constructor"<<endl;
		}
		
		~Core2Web(){
			cout<<"C2W Destructor"<<endl;
		}
};

class Biencaps : public virtual Shashi{

	public :
	
		Biencaps(){
			cout<<"Biencaps Constructor"<<endl;
		}
		
		~Biencaps(){
			cout<<"Biencaps Destructor"<<endl;
		}

};

class Incubator : public Core2Web , public Biencaps{

	public :
		Incubator(){
			cout<<"Incubator Constructor"<<endl;
		}
		
		~Incubator(){
			cout<<"Incubator Destructor"<<endl;
		}
};

int main(){

	Incubator obj;

	return 0 ;
}
