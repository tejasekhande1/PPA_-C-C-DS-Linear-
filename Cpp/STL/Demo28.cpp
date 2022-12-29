// QUEUE :

#include <iostream>
#include <queue>

void showQueue(std::queue<int> que){
	while(!que.empty()){
		std::cout<< que.front() <<std::endl;;
		que.pop();
	}
}

int main(){

	std::queue <int> q ;
	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	q.push(50);

	showQueue(q);

	// q.front() ; q.back() ; swap()

	return 0 ;
}
