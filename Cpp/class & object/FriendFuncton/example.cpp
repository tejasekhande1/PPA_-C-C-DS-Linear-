// one friend function for multiple classes

#include <iostream>
using namespace std;

class A_Rahane;
class R_Sharma{
	int no_of_bats = 5 ;
	public :
	friend void bat_Access(R_Sharma& ref1 ,A_Rahane& ref2);
};

class A_Rahane{
	int no_of_bats = 4 ;
	public :
	friend void bat_Access(R_Sharma& ref1 ,A_Rahane& ref2);
};

void bat_Access(R_Sharma& ref1 , A_Rahane& ref2){
	cout<<ref1.no_of_bats<<endl;
	cout<<ref2.no_of_bats<<endl;
	cout<<ref1.no_of_bats + ref2.no_of_bats <<endl;
}

int main(){
	
	R_Sharma obj1 ;
	A_Rahane obj2 ;

	bat_Access(obj1,obj2);

	return 0 ;
}
