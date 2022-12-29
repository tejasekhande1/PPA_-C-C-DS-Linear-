// addressingg array pointer 

#include <iostream>
using namespace std ;
	
	int main(){
	
	int arr1[5] = {10,20,30,40,50};
	int arr2[5] = {60,70,80,90,100};
	int arr3[3] = {110,120,130};
	
	// elements address
	cout<< arr1 << endl;
	cout<< arr2 << endl;
	cout<< arr3 << endl;

	// gate address
	cout<< &arr1 << endl;
	cout<< &arr2 << endl;
	cout<< &arr3 << endl;

	cout<< *arr1 << endl;
	cout<< *arr2 << endl;
	cout<< *arr3 << endl;
	
	return 0 ;
	}
