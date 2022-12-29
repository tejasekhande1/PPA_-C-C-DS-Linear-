#include <iostream>
using namespace std;

int main(){

	int n;
	int arr[100];
	int ele;
	int count;

	cout<<"Enter Number Of Elements in Array : "<<endl;
	cin >> n ;

	cout<<"Enter Elements in Array : "<<endl;
	for(int i = 0 ; i < n ; i++ ){
		cin>> arr[i];
	}

	cout<<"Enter Element For Find their Last Occurence Position : "<<endl;
	cin >> ele ;

	for(int i = n-1 ; i>=0 ; i--){
		if( arr[i] == ele ){
			cout<< "Last Occurrence Position : " << i <<endl;
			int count = 1 ;
			break;
		}
	}

	if( count == 0){
		cout<<"Element is Absent"<<endl;
	}

	return 0 ;
}
