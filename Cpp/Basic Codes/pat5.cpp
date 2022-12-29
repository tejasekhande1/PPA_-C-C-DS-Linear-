#include <iostream>
int main() {
	int l = 1 ;
	for(int i=1 ; i<=4 ; i++){

		for (int k = 1 ; k<i ; k++){
			std::cout<<"   ";
		}
		
		for(int j=4 ; j>=i ; j--){
			std::cout<< l*l << " " ;
			l++ ; 
		}
	std::cout<<""<<std::endl;
	}

	return 0 ;
}

/*
output

1 4 9 16
  25 36 49
     64 81
	100
             */

