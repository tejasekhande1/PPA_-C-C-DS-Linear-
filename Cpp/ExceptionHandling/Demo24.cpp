
#include <iostream>
using namespace std;

void fun(int x , int y){

	cout<<"Start Fun"<<endl;
	
	try{
		if(y == 0){
			throw "Divide By Zero";
		}else{
			cout << x/y <<endl;
		}
	}catch(int){                                   // MATCH NAHI ZALA KI MAIN NE CALL KELA MHNUN TYACHYA CATCH MADHE HANDLE KELA JATO
		cout << "Exception : Int" <<endl;
		}

	cout<<"End Fun Fun"<<endl;
}

int main(){
	
	cout<<"Start Of Main"<<endl;	
	try{
		fun(10,0);
	}catch(const char *str){
		cout << "Exception : " << str <<endl;		
	}

	cout<<"End Of Main"<<endl;

	return 0 ;
}
