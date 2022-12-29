:
// IMPLEMENTING QUEUE USING ARRAY (CIRCULAR ARRAY) : 

#include <stdio.h>
#define size 5

int arr[size];
int front = -1;                        // INVALID INDEX OF ARRAY
int rear = -1;

int isFull(){

	if(front == (rear+1) % size)      // OR FRONT == 0 && REAR == (REAR+1)%SIZE    // CHECK FOR QUEUE IS EMPTY OR NOT ?
		return 1;

	return 0;
}

int isEmpty(){

	if((rear == -1))                //
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
	
		rear = (rear +1) % size;               // CIRCULAR QUEUE CONDITION
		arr[rear] = x;
//		printf("Inserted Element : %d\n",x);
	}

}

int Dequeue(){

	if(isEmpty()){
		printf("Queue is Empty\n");
	}else{
		int del = arr[front];
			if(front == rear){
				rear == -1;
				front == -1;
			}

			front++;

		return del;
	}
}

void printQueue(){

	if(isEmpty()){
		printf("Queue is Empty\n");
		return;
	}else{
		int i;

		for(int i=front ; i != rear ; i=(i+1) % size){
			printf("|%d|",arr[i]);
		}
			printf("|%d|",arr[i]);

		printf("\n");
	}
}

void main(){

	Enqueue(10);
	Enqueue(20);
	Enqueue(30);
	Enqueue(40);
	Enqueue(50);
	printQueue();

	Dequeue();
	Dequeue();
	Enqueue(60);
	Enqueue(70);
	printQueue();
}
