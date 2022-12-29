// Single Inheritance : Eka class la ekach parent/base class 

#include <iostream>
using namespace std;

class Core2Web{

	int x = 10;

	public :
		void disp(){
			cout<< x <<endl;
		}
};

class Incubator : public Core2Web{

	int x = 20 ;

	public : 
		void disp(){
			cout<< x <<endl;
		}
};

int main(){
	
	Incubator obj;
	obj.disp();                    // 20
	
	return 0 ;
}

// jyacha obj asto tyach class chya goshtinna call karto.....
