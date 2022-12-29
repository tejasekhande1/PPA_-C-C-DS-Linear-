// addAtEnd()

#include <stdio.h>
#include <stdlib.h>

struct Node *head = NULL;

struct Node{
	int data;
	struct Node *next;
};

void printNode(){
	struct Node *temp = head;
	while(temp != NULL){
		if(temp->next != NULL)
			printf("|%d|->",temp->data);
		else
			printf("|%d|",temp->data);
		temp = temp->next;
	}
}

void addAtEnd(){
	struct Node *temp = head;
	struct Node *node = (struct Node*)malloc(sizeof(struct Node));
	node->data = 30;
	node->next = NULL;

	while(temp->next != NULL){
		temp = temp->next;
	}

	temp->next = node;	
}

void addAtEnd1(int data){
	struct Node *temp = head;
	struct Node *node = (struct Node*)malloc(sizeof(struct Node));
	node->data = data;
	node->next = NULL;

	while(temp->next != NULL){
		temp = temp->next;
	}

	temp->next = node;	
}

void count(){
	int count = 0 ;
	struct Node *temp = head;
	while(temp != 0){
		count++;
		temp = temp->next;
	}

	printf("%d\n",count);
}

void main(){
	
	struct Node *node1 = (struct Node*)malloc(sizeof(struct Node));
	head = node1;
	node1->data = 10;
	node1->next = NULL;

	struct Node *node2 = (struct Node*)malloc(sizeof(struct Node));
	node2->data = 20;
	node2->next = NULL;
	node1->next = node2;

	printNode();
	printf("\n");

	addAtEnd();
	printf("\n");

	printNode();
	printf("\n");

	int data;
	printf("Enter Data : \n");
	scanf("%d",&data);
	addAtEnd1(data);
	printNode();
	printf("\n");

	count();
}
