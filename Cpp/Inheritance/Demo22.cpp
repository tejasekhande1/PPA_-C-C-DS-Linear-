// Types of Inheritance : Public,Private,Protected

#include <iostream>
using namespace std;

class Core2Web{
		int x = 10 ;

	protected :
		int y = 20;

	public: 
		int z = 30 ;
};

class Incubator : public Core2Web{

	public:
		void disp(){
			cout<< x <<endl;
			cout<< y <<endl;
			cout<< z <<endl;
		}
};

int main(){

	Incubator obj;

	cout<< obj.x <<endl;
	cout<< obj.y <<endl;
	cout<< obj.z <<endl;

	return 0 ;
}


/*						Child		Main
	1) Public Inheritance :
		a) Priavte :			NO		NO
		b) Public :			YES		YES
		c) Protected :			YES		NO
	
	2) Private Inheritance :
		a) Private :			NO		NO
		b) Public :			YES		NO
		c) Protected :			YES		NO

	3) Protected Inheritance :
		a) Private :			NO		NO
		b) Public :			YES		NO
		c) Protected :			YES		NO

*/

// PRIVATE INHERITANCE : USED WHEN WE WANT TO HIDE PARENT CLASS DATA
