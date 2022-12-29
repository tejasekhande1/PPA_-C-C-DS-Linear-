// head cha address pathvala ekadya function madhun (&head) tar ghenara double pointer lagto (** Node)
// DRAW FUNCTION WISE DAIGRAM

#include <stdio.h>
#include <stdlib.h>

struct Node{
	struct Node *prev;
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

void addAtFirst(){
	struct Node *temp = head;
	struct Node *node = (struct Node*)malloc(sizeof(struct Node));

	int data;
	printf("Enter Data : ");
	scanf("%d",&data);

	node->prev = NULL;
	node->data = data;
	node->next = NULL;

	node->next = head;
	temp->prev = node;
	head = node;
}

void addAtEnd(){
	struct Node *temp = head;
	struct Node *node = (struct Node*)malloc(sizeof(struct Node));

	int data;
	printf("Enter Data : ");
	scanf("%d",&data);
	node->prev = NULL;
	node->data = data;
	node->next = NULL;

	while(temp->next != NULL){
		temp = temp->next;
	}

	temp->next = node;
	node->prev = temp;
}

void addAtPos(int pos){
	struct Node *temp = head;
	struct Node *temp2 = NULL;
	struct Node *node = (struct Node*)malloc(sizeof(struct Node));

	int data;
	printf("Enter Data : ");
	scanf("%d",&data);
	node->prev = NULL;
	node->data = data;
	node->next = NULL;

	while(pos-2){
		temp = temp->next;
		pos--;
	}

	// TRICK : JOINED NEW NODE WITH PREV AND NEXT
	node->next = temp->next;
	node->prev = temp; 
	temp->next = node;
	node->next->prev = node;
/*	temp2 = node->next;
	temp2->prev = node; */
}

void deleteFirst(){
	struct Node *temp = head;
	head = head->next;
	head->prev = NULL;
	free(temp);
}

void deleteLast(){
	struct Node *temp = head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->prev->next = NULL;
	free(temp);
}

void deleteAtPos1(int pos2){
	struct Node *temp = head;
	while(pos2-1){
		temp = temp->next;
		pos2--;
	}
	
	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;
	free(temp);
}


void reverse(){

	struct Node *temp = head;

	while(temp->next != NULL){
		temp = temp->next;
	}

	head = temp;

	while(head != NULL){
	
		if(head->prev != NULL){
			printf("|%d|->",head->data);
		}else{
			printf("|%d|",head->data);
		}

		head = head->prev;			
	}

}


void reverse1(){

 }

void main(){
	struct Node *node = (struct Node*)malloc(sizeof(struct Node));
	head = node;

	int data;
	printf("Enter Data : ");
	scanf("%d",&data);

	node->prev = NULL;
	node->data = data;
	node->next = NULL;

	printNode();
	printf("\n");

	addAtFirst();

	printNode();
	printf("\n");

	addAtEnd();

	printNode();
	printf("\n");
	
	int pos;
	printf("Enter Position For Add Node : ");
	scanf("%d",&pos);
	addAtPos(pos);

	printNode();
	printf("\n");
	
/*	deleteFirst();

	printNode();
	printf("\n");

	deleteLast();

	printNode();
	printf("\n");
	
	int pos1;
	printf("Enter Position For Delete Node : ");
	scanf("%d",&pos1);
	deleteAtPos1(pos1);
*/
	reverse();
//	printRevNode();
	printf("\n");

//	printf("%ld\n",sizeof(struct Node));                        // 24

}
