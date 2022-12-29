// PRIORITY : SORT IN DECENDING ORDER

#include <iostream>
#include <queue>

void showQueue(std::priority_queue<int> que){
	while(!que.empty()){
		std::cout<< que.top() <<std::endl;;
		que.pop();
	}
}

int main(){

	std::priority_queue<int> pq ;
	pq.push(10);
	pq.push(40);
	pq.push(30);
	pq.push(50);
	pq.push(20);

	showQueue(pq);

	return 0 ;
}

// 50
// 40
// 30
// 20
// 10
