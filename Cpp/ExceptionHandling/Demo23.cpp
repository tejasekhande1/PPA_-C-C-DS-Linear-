
// STACK UNWINDING : STACK FRAME POP KARANE (DAIGRAM 38:14) 

#include <iostream>
using namespace std;

void fun(int x , int y){

	cout<<"Start Fun"<<endl;
	
	try{                                                          // Ith handle nahi kel tar stack frame pop hote
		if(y == 0){
			throw "Divide By Zero";
		}else{
			cout << x/y <<endl;
		}
	}catch(const char *str){
		cout << "Exception : " << str <<endl;
		}

	cout<<"End Fun Fun"<<endl;
}

int main(){
	
	cout<<"Start Of Main"<<endl;	
	fun(10,0);
	cout<<"End Of Main"<<endl;

	return 0 ;
}
