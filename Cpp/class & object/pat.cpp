#include <iostream>
using namespace std ;
	int main() {
	
	for(int i=1 ; i<=4 ; i++){
		for(int j=1 ; j<=i ; j++){
			cout<<"* ";
		}
		for(int k=3 ; k>=i ; k--){
			cout<<"  ";
		}

		for(int k=3 ; k>=i ; k--){
			cout<<"  ";
		}
		for(int l=1 ; l<=i ; l++){
			cout<<"* ";
		}

		cout<<""<<endl;
	}

	for(int i=4 ; i>=1 ; i--){
		for(int j=1 ; j<=i ; j++){
			cout<<"* ";
		}
		for(int k=3 ; k>=i ; k--){
			cout<<"  ";
		}

		for(int k=3 ; k>=i ; k--){
			cout<<"  ";
		}
		for(int l=1 ; l<=i ; l++){
			cout<<"* ";
		}

		cout<<""<<endl;
	}


		return 0 ;
	}
