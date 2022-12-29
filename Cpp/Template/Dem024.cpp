// TEMPLATE SPECIALIZATION :

#include <iostream>
using namespace std;

template<typename T>

void fun(T x){
	cout<<"Template"<<endl;
} 

template<>				// TEMPLATE SPECIALIZATION
void fun(int x){
	cout<<"Int Specific"<<endl;
}

int main(){

//	fun(10);                // Int Specific
	fun<int>(10);		// Template [ jar apan Template specialization use kela tr ]

	return 0 ;
}
