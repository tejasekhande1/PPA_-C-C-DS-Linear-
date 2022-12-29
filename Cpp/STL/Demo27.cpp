// DERIVED/CONTAINER ADAPTER :
// 1] STACK : DEFAULT DEQUE USED ; SIMILARY WORK LIKE AS VECTOR ;

#include <iostream>
#include <stack>

void showStack(std::stack<int> stk){
	while(!stk.empty()){
		std::cout<< stk.top()<<std::endl;
		stk.pop();
	}
}

int main(){

	std::stack<int> s ;

	s.push(10);
	s.push(30);
	s.push(40);
	s.push(20);
	s.push(50);

	std::cout<< s.size() <<std::endl ;        // 5
	showStack(s);

	return 0 ;
}

// Last Kadun Output Deto ; 50,20,40,30,10
