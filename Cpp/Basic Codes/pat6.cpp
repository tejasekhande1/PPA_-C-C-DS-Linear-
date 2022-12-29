#include <iostream>
int main(){
	for(int row=1 ; row<=5 ; row++){
		for(int space=4 ; space>=row ; space--){
			std::cout<<"  ";
		}
		for(int cols=1 ; cols<=(row*2)-1 ; cols++){
			std::cout<< row ;
		}
		std::cout<<""<<std::endl;
	}
	
	return 0 ;
}
/*
  output
    *
   ***
  *****
 *******
*********
           */
