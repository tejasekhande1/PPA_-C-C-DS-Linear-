#include <iostream>
using namespace std ;

	class Demo{
		public :
//			Demo(char X ){
//				cout<<"Character"<<endl;
//			}

			Demo(double Y){
				cout<<"DOUBLE"<<endl;
			}
	
//			Demo (char Y){                            two same data type with same constructor will not be allowed
//				cout <<"Character"<<endl;
//			}
	};

	int main(){

		Demo obj1(1);
		Demo obj3('A');
		Demo obj2(10.5f);
		Demo obj4(30.5);

	return 0 ;
}



// output :     DOUBLE
//      	DOUBLE
// 		DOUBLE
// 		DOUBLE
//
// because object upgrade it self as order char -> int -> float -> double
