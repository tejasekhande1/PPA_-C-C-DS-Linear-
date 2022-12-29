// Multiple Inheritance : 
// Constructor Calling :


#include <iostream>
using namespace std;

class Core2Web{

//	int emp = 1 ;

	public :
	
		int emp = 1 ;
	
		Core2Web(){
			cout<<"C2W Constructor"<<endl;
		}
		
		~Core2Web(){
			cout<<"C2W Destructor"<<endl;
		}
		void motive(){
			cout<<"Core Programming Class"<<endl;
			cout << "Employee : " << emp <<endl;
		}
};

class Biencaps{
		
//	int emp = 27 ;

	public :
		
		int emp = 27 ;
	
		Biencaps(){
			cout<<"Biencaps Constructor"<<endl;
		}
		
		~Biencaps(){
			cout<<"Biencaps Destructor"<<endl;
		}
	
		void motive(){
			cout<<"Building Innovative Softwares"<<endl;
			cout << "Employee : " << emp <<endl;
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
		void dispMembers(){
			cout<< Core2Web::emp <<endl;
			cout<< Biencaps::emp <<endl;
		}
};

int main(){

	Incubator obj;
	obj.Core2Web::motive();
	obj.dispMembers();

	return 0 ;
}


/* Multiple inheritance : smja don class kade same variable astil ani ek access karycha try kela tr error yeta..pn aacces nhi kela tr error ny yet
 *
 */
