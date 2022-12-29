#include <iostream>
int main() {
	for(int i=1 ; i<=4 ; i++){
		for (int k = 1 ; k<i ; k++){
			std::cout<<"  ";
		}
		
		for(int j=4 ; j>=i ; j--){
			std::cout<<"* " ;
		}
	std::cout<<""<<std::endl;
	}

	return 0 ;
}

/*
output

* * * *
  * * *
    * *
      *  */

