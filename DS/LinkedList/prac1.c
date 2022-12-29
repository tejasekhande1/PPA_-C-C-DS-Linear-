// ALL IN ONE CODE :
// IF INTERVIEWER SAID THAT 8TH POSITION AND WE HAVEE ONLY 5 NODES THEN WE CALCULATE POS-COUNT = N TH THEN ADD NTH NODE USING ADDATEND() IN FOR LOOP
// POSITION CHYA VELES WHILE LOOP MADHE KADHICH NULL CHI CONDITION LIHAYCHI NAHII

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
	int x;
	printf("Enter Data For Node : ");
	scanf("%d",&x);
	struct Node *node = (struct Node*)malloc(sizeof(struct Node));
	node->data = x ;
	node->next = NULL;	

	while(temp != NULL){
		temp = temp->next;
	}

	node->next = head;
	head = node;
}

void addAtEnd(){
	struct Node *temp = head;
	int x;
	printf("Enter Data For Node : ");
	scanf("%d",&x);
	struct Node *node = (struct Node*)malloc(sizeof(struct Node));
	node->data = x ;
	node->next = NULL;	

	while(temp->next != NULL){
		temp = temp->next;
	}

	temp->next = node;
}

void addAtPos(int pos){

	struct Node *temp = head;
	struct Node *node = (struct Node*)malloc(sizeof(struct Node));
	node->data = 90;
	node->next = NULL;

	while(pos-2){
		temp = temp->next;
		pos--;
	}

	node->next = temp->next;
	temp->next = node;
}

void count(){
	int count = 0;
	struct Node *temp = head;
	while(temp != NULL){
		count++;
		temp = temp->next;
	}
	printf("%s %d\n","The Total Nodes is :",count);
}

void deleteFirst(){
	struct Node *temp = head;
	head = head->next;
	free(temp);
}

void deleteEnd(){                                      // dryrun with daigram
	struct Node *temp = head;
	while(temp->next->next != NULL){
		temp = temp->next;
	}

	free(temp->next);
	temp->next = NULL;

	// test cases : Only one node present
}

void deleteAtPos(int pos){
	struct Node *temp = head;
	while(pos-2){
		temp = temp->next;
		pos--;
	}

	struct Node *temp2 = temp->next;
	temp->next = temp2->next;
//	temp->next = temp->next->next;
	free(temp2);

	// test case : head is empty
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
	
	struct Node *node3 = (struct Node*)malloc(sizeof(struct Node));
	node3->data = 30;
	node3->next = NULL;
	node2->next = node3;

	struct Node *node4 = (struct Node*)malloc(sizeof(struct Node));
	node4->data = 40;
	node4->next = NULL;
	node3->next = node4;
	
	struct Node *node5 = (struct Node*)malloc(sizeof(struct Node));
	node5->data = 50;
	node5->next = NULL;	
	node4->next = node5;

/*	for(int i=0 ; i<3 ; i++){
		addAtEnd();
	}

	int pos;
	printf("Enter Pos Between 1 to 8 : ");
	scanf("%d",&pos);

	if( pos > 1 && pos < 8){
		addAtPos(pos);
		printNode();
		printf("\n");
	}

	if( pos == 1 || pos == 0){
		addAtBeg(pos);
		printNode();
		printf("\n");
	}

	if( pos == 8 ){
		addAtEnd(pos);
		printNode();
		printf("\n");
	}

	if( pos > 1 && pos < 8){
		printf("Positin OutOff Bound\n");
	}

	count(); */

	printNode();
	printf("\n");

/*	// deleteFirst
	deleteFirst();
	
	printNode();
	printf("\n");
	
	// deleteEnd
	deleteEnd();
	
	printNode();
	printf("\n");
*/
	// deleteAtPos(int)
	int x;
	printf("Enter Position : ");
	scanf("%d",&x);

	deleteAtPos(x);
	printNode();
	printf("\n");
}
