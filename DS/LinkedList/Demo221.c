// addAtEnd

#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node *next;
};

struct Node *head = NULL;

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

void addAtBeg(){

	struct Node *temp = head;

	struct Node *node = (struct Node*)malloc(sizeof(struct Node));
	node->data = 20;
	node->next = NULL;

	node->next = head;
	head = node;
}

void addAtEnd(){

	struct Node *temp = head;
	struct Node *node = (struct Node*)malloc(sizeof(struct Node));
	node->data = 30;
	node->next = NULL;

	while(temp->next != NULL){               // ek ghar agoder thambto aani check karto.....temp->next null alla ki to 2nd node la asto 
		temp = temp->next;               // 2nd Node chya next madhe node cha address store karto
	}
		temp->next = node;
}	

void main(){

	struct Node *node1 = (struct Node*)malloc(sizeof(struct Node));
	head = node1;
	node1->data = 10;
	node1->next = NULL;

	// 1. printNode()
	printNode();
	printf("\n");

	// 2. addAtBeg()
	addAtBeg();
	printf("\n");
	
	printNode();
	printf("\n");

	addAtEnd();
	printf("\n");
	
	printNode();
	printf("\n");
}
