#include<iostream>
using namespace std ;

	class core2web {
		int myChair = 0 ;

		void lang();

		public :
		void admission();
	};
	
	void core2web::lang(){
		cout<<"PPA,C++,Python,Java"<<endl;
	}

	void core2web::admission(){
		cout<<"Take Admission"<<endl;
		cout<< myChair <<endl;
		lang();
	}

int main(){
		core2web obj;
		obj.admission();
		

		return 0 ;
	}
