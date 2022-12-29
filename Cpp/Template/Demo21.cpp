#include <iostream>
using namespace std;
template <typename T>

class Template{

	public :

	template <typename T , typename U>          // multiple template

	void fun(T x , U y){
		cout<<"Template : "<< x << " : " << y <<endl;
		}
};

int main(){

	Template obj;
	obj.fun(10,20.5);

//	obj1.fun<int>(10,20.5);	     -----> Typecasting

	return 0 ;
}

// Template madhe diff type che parameter pass kele tr error deto mhnun multiple template use karave lagtil
// OR typecast karav lagel
