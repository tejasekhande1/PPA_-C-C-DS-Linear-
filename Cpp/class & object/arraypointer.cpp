#include <iostream>
using namespace std ;

int main(){
	
	int arr1[5] = {10,20,30,40,50};
	int arr2[3] = {60,70,80};

	int *ptr1 = arr1 + 1 ;
	cout << *ptr1 <<endl;         // 20

	ptr1 = ptr1 + 1 ;
	cout<< *ptr1 <<endl;         // 30`: 
	return 0 ;
}
