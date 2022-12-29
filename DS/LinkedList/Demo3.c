// addAtPos(int Pos) ----> IMP FOR INTERVIEW

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

void addAtPos(int pos){
	struct Node *temp = head;
	struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));
	newnode->data = 50;
	newnode->next = NULL;
	while(pos-2){
		temp = temp->next;
		pos--;
	}

	newnode->next = temp->next;
	temp->next = newnode;	
}

void main(){
	struct Node *node = (struct Node*)malloc(sizeof(struct Node));
	head = node;
	node->data = 10;
	node->next = NULL;

	struct Node *node1 = (struct Node*)malloc(sizeof(struct Node));
	node1->data = 20;
	node1->next = NULL;
	node->next = node1;

	struct Node *node2 = (struct Node*)malloc(sizeof(struct Node));
	node2->data = 30;
	node2->next = NULL;
	node1->next = node2;

	struct Node *node3 = (struct Node*)malloc(sizeof(struct Node));
	node3->data = 40;
	node3->next = NULL;
	node2->next = node3;

	int pos;
	printf("Enter Position Between 1 to 4 : ");
	scanf("%d",&pos);                               // "%d\n" --> deu naka

	if( pos > 1 && pos < 4)
		addAtPos(pos);
	else
		printf("Position OutOff Index\n");

	printf("\n");
	printNode();
	printf("\n");
}
