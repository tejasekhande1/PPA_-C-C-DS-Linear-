#include <iostream>
using namespace std;

class Employee{;

	public :

	int sal ;

	Employee(int sal){
		this->sal = sal;
	}

	template <typename T>
/*	T max(T x , T y){
		if (x > y)
			return x ;
		else
			return y ;
	} */

	T max(T x , T y){                      // without operator overloading
		if (x.sal > y.sal)
			return x ;
		else
			return y ;
	}

/*	friend bool operator>(Employee& ref1 , Employee& ref2){
		return ref1.sal > ref2.sal ;
	}*/
};

int main(){

	Employee Ashish(100000);
	Employee Kanha(200000);

	Employee retVal = Ashish.max(Ashish,Kanha);
	cout << retVal.sal <<endl;

	return 0 ;
}
