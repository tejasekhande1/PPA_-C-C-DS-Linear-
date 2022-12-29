#include <iostream>
using namespace std;

class Indian_Cricket{
	int *totalPlayers ;

	public :
	Indian_Cricket(){
	cout<<"In A-String Team"<<endl;

	totalPlayers = new int ;
	*totalPlayers = 25 ;
	}

	void onGround(){
	Indian_Cricket obj ;
	cout<<"On Ground"<<endl;
	}

	~Indian_Cricket(){
	cout<<"Players in their rooms"<<endl;
	delete(totalPlayers);

	}
};

int main(){
	Indian_Cricket obj1 ;
	obj1.onGround();
	return 0 ;
}
