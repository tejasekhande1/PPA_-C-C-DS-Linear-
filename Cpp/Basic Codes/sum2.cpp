#include <iostream>
int main() {
	int x = 10;
	int ans;
	ans = x++ + ++x;
	std::cout<<ans<<std::endl;
	std::cout<<x<<std::endl;
	return 0;
}
