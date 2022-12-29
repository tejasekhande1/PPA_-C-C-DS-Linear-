#include <iostream>
using namespace std ;
	class core2web {
		int myChair = 0 ;
		void lang(){                 // member function because it is in the class
			cout<<"PPA,C++,Python,Java"<<endl;
		} 
		public :
		void admission(){           // also member function
			cout<<"Take Admission"<<endl;
			cout<< myChair <<endl;
			lang();
	
		}
	};                               // ';' is compulsory when class is ended
	
	void visitwebsite(){             // its caalled only 'Function' because it is outside the class
		cout<<"C2W website";
	}

	int main(){
	//	cout<<obj.myChair;      // private
	//	obj.lang();             // private

		core2web obj ;
		obj.admission() ;
		visitwebsite();

	return 0 ;
}
 
/*

output

Take Admission
0
PPA,C++,Python,Java
C2W website

*/
