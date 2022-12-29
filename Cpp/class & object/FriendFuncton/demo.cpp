#include <iostream>
using namespace std;

class MobileAccess{
	private :
		int mobAccess ;

	public :
		MobileAccess(int myAccess){
			mobAccess = myAccess ;
		}

		void myAccess();

		friend void friendAccess (MobileAccess& ref);

};

	void MobileAccess::myAccess(){
		cout<<mobAccess<<endl;
	}

	void friendAccess(MobileAccess& ref){
		ref.mobAccess += 3 ;
		cout<<ref.mobAccess<<endl;
	}

int main(){

	MobileAccess obj(5) ;
	obj.myAccess();

	friendAccess(obj);

	return 0 ;
}
