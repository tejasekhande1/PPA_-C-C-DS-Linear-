#include <iostream>
using namespace std;

class FriendAccess;
class FarmHouse{
	int Tv = 1;
	int bedRoom = 2 ;
	int swimmingPool = 3 ;
	public :
		void display(){
			cout<<Tv<<endl;
			cout<<bedRoom<<endl;
			cout<<swimmingPool<<endl;
		}

	friend class FriendAccess;
};

class FriendAccess{
	public:
		void member1(FarmHouse& ref){
			cout<< ref.Tv <<endl;
			cout<< ref.bedRoom <<endl;
			cout<< ref.swimmingPool <<endl;
		}
		void member2(FarmHouse& ref){
			cout<< ref.Tv <<endl;
			cout<< ref.bedRoom <<endl;
			cout<< ref.swimmingPool <<endl;
		}
};

int main(){

	FarmHouse obj1;
	obj1.display();

	FriendAccess obj2;
	obj2.member1(obj1);
	obj2.member2(obj1);


	return 0 ;
}
