#include <iostream>
int main() {
	int x ;
	std::cout<<"Enter X "<<std::endl;
	std::cin>> x;
	int y ;
	std::cout<<"Enter Y "<<std::endl;
	std::cin>>  y;
	int ans = (x<y)? x:y;
	std::cout<<ans<<std::endl;
	return 0 ;
}
