// passing address of head

#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node *next;
};

void printNode(struct Node **head){

	struct Node *temp = *head;

	while(temp != NULL){	
	
		if(temp->next != NULL)
			printf("|%d|->",temp->data);
		else
			printf("|%d|",temp->data);	
	
		temp = temp->next;
	}
}

void addAtBeg(struct Node **head){
	
	struct Node *temp = *head;

	struct Node *node = (struct Node*)malloc(sizeof(struct Node));
	node->data = 20;
	node->next = NULL;

	node->next = *head;
	*head = node;
}

void main(){

	struct Node *head = NULL;

	struct Node *node1 = (struct Node*)malloc(sizeof(struct Node));
	head = node1;
	node1->data = 10;
	node1->next = NULL;

	// 1. printNode()
	printNode(&head);
	printf("\n");

	// 2. addAtBeg()
	addAtBeg(&head);
	printf("\n");
	
	printNode(&head);
	printf("\n");
}
