
// REAL TIME EXAMPLE OF DLL : STUDENTS SEAT ON BEMCHES IN COLOUM ; FIRST AND LAST STUDENT ONLY HAVE ONE ADDRESS
// QUIZ : FIND OUT GIVEN LINKED LIST IS CIRCULAR OR NOT ?

// FUNCTIONS IN SLL : COUNT() ; addAtEnd() ; addAtBeg() ; addAtPos() ; deleteEnd() ; deteteFirst() ; deleteAtPos() ; reverse()  ----> USER DEFINED FUN

#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node *next;
};

//struct Node *head = NULL;


void printNode(struct Node *head){
	struct Node *temp = head;

	while(temp != NULL){	
		if(temp == NULL)
			printf("|%d|->",temp->data);
		else
			printf("|%d| ",temp->data);	
		temp = temp->next;
	}
}

void addAtBeg(struct Node *head){

	struct Node *temp = head;

	struct Node *node = (struct Node*)malloc(sizeof(struct Node));
	node->data = 20;
	node->next = NULL;

	node->next = head;
	head = node;

//	printNode(head);
}

void main(){
//	struct Node *head = malloc(sizeof(struct Node));                        ----> void pointer automatically typecast karto
	struct Node *head = NULL;

	struct Node *node1 = (struct Node*)malloc(sizeof(struct Node));
	head = node1;
	node1->data = 10;
	node1->next = NULL;

	// 1. printNode()
	printNode(head);
	printf("\n");

	// 2. addAtBeg()
	addAtBeg(head);
	printf("\n");
}
