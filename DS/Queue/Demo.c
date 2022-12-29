// QUEUE : FIRST IN FIRST OUT
// EXAMPLE : CARS PASSING THROUGH TOLLS ON ROAD
// IMPLEMENTING QUEUE USING ARRAY (NORMAL ARRAY) : 
// In C , If Size of array is 5 and we passed 6 element it is accesible in C but not in Java

#include <stdio.h>
#define size 5

int arr[size];
int front = -1;                        // INVALID INDEX OF ARRAY
int rear = -1;

int isFull(){

	if(rear == size -1)
		return 1;

	return 0;
}

int isEmpty(){

	if((rear == -1 && front == -1) || rear < front)
		return 1;

	return 0;
}

void Enqueue(int x){

	if(isFull()){
		printf("Queue is Full\n");
	}else{

		if(front == -1){
			front = front+1 ;
		}
	
		rear = rear +1;
		arr[rear] = x;
//		printf("Inserted Element : %d\n",x);
	}

}

int Dequeue(){

	if(isEmpty()){
		printf("Queue is Empty\n");
		return -1;
	}else{
		front = front + 1;
		return -1;
	}
}

void printQueue(){

	if(isEmpty()){
		printf("Queue is Empty\n");
	}else{

		for(int i=front ; i<=rear ; i++){
			printf("|%d|",arr[i]);
		}

		printf("\n");
	}
}

void main(){

	Enqueue(10);
	Enqueue(20);
	Enqueue(30);
	Enqueue(40);
	Enqueue(50);
	Enqueue(60);

	printQueue();

	Dequeue();
	Dequeue();
	Dequeue();
	Dequeue();
	Dequeue();

	printQueue();

	Enqueue(60);
	printQueue();
}
