#include <iostream>
int main() {
	for(int i=1 ; i<=5 ; i++){
		for(int j=4 ; j>=i ; j--){
			std::cout<<"  ";
		}
		int x = 1;
		for(int k=1 ; k<=(i*2) - 1 ; k++){
			std::cout<< x << " ";
			if(k < i)
				x++ ;
			else
				x-- ;
		}
		
		std::cout<<""<<std::endl;
	}
	return 0 ;
}
