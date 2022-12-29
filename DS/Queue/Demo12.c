// CIRCULAR QUEUE USING LINKEDLIST :

#include<stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node *next;
};

struct Node *front = NULL;
struct Node *rear = NULL;

void enqueue(int x){
	struct Node *t = (struct Node*)malloc(sizeof(struct Node));
	if(t == NULL)
		printf("Queue is Full\n");
	else{
		t->data = x;
		t->next = NULL;
		if(front == NULL)
			front=rear=t;
		else{
			rear->next=t;
			rear = t;
		}
	}
}

int dequeue(){
	int x = -1;
	struct Node *t;
	if(front == NULL)
		printf("Queue is Empty\n");
	else{
		x = front->data;
		t = front;
		front = front->next;
		free(t);
	}

	return x;
}

void display(){
	struct Node *temp = front;
	while(temp != NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}

	printf("\n");
}

void main(){
	
	enqueue(10);
	enqueue(20);
	enqueue(30);
	dequeue();
	dequeue();
	dequeue();
	enqueue(40);
	enqueue(50);
	enqueue(60);
	enqueue(70);

	display();

//	printf("%d ",dequeue());
}
