
#include <iostream>
using namespace std;

class Divide{

	int x,y ;
//	float ans;

	public:
		Divide(int x , int y){
			this->x = x ;
			this->y = y ;
		}

		void fun(){
			try {
				if(y == 0){
					throw "Divide by zero";
				} else {
					cout<< x/y <<endl;
				}
		} catch(const char *str){
			cout <<"Exception : "<< str <<endl;
			}
		}
};

int main(){

	int x,y ;
	cout<< "Enter Values : " <<endl;
	cin >> x >> y ;

	Divide obj(x,y);
	obj.fun();

	cout << "End of Main" <<endl;

	return 0 ;
}
