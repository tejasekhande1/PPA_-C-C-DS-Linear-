// Template : function same rahnar asel ani data types jar change honar asel tr jast code lihayla lagel mhnun TEMPLATE hi concept ali.
// 		It has two types Function Temp. & Class Temp.

#include <iostream>
using namespace std;
template <typename T>

T add(T x , T y){
	return x+y ;
}

class Template{
	public :
	template <typename T>

		T add(T x , T y){
			return x+y ;
		}
};

int main(){

	cout<< add(10,20) <<endl;
	Template obj;
	cout<< obj.add(20,30) <<endl;

	return 0 ;
}
