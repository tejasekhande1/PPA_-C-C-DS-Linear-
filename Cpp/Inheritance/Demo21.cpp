// Access Specifier : Public , Private , Protected

#include <iostream>
using namespace std;

class Core2web{

	int x = 10 ;       			 // Private access only for member function and Friend Function of that class

	protected :

		int z = 30 ;

	public :
	
		int y = 20;
		void disp(){
	//	cout<< x <<"  "<< y <<endl;
		cout<< z <<endl;
	}
};

class Incubator : public Core2web{
	public:
		void dispChild(){
		//	cout<< x <<"  "<< y <<endl;
		
			cout<< z <<endl;
		}
};

int main(){

	Core2web obj1 ;
//	cout<< obj1.y << "  " << obj1.x <<endl;
//	cout<< obj1.z <<endl;
	obj1.disp();

	Incubator obj2;
//	cout<< obj2.x << "  " <<obj2.y <<endl;
//	cout<< obj2.z <<endl;
	return 0 ;
}

// Protected : Access only from derived classes of that class and aslo for member function of that class..Error when we try to access in main.....
// Private : Access only for that class member functions...Error in Child Class and main...
