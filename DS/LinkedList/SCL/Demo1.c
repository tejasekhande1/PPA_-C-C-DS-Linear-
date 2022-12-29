// SINGLY CIRCULAR LINKED LIST : CHECK GIVEN LINKED LIST IS CIRCULAR OR NOT ?
// SINGLE NODE SATHI WHILE(TEMP->NEXT != HEAD) HI CONDITION INVALID ASTE MHNUN DO-WHILE LOOP USE KKARTAT
// WHILE LOOP ---> ENTERY CONTROL LOOP AND DO-WHILE LOOP ----> EXIT CONTROL LOOP
// USE OF GETCHAR() ?

#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node *next;
};

struct Node *head = NULL;
struct Node *tail = NULL;

void printNode(){
	struct Node *temp = head;
	do{
		if(temp->next != head)
			printf("|%d|->",temp->data);
		else
			printf("|%d|",temp->data);

		temp = temp->next;

	}while(temp != head);
}

void addAtFirst(){

	int data;
	printf("Enter Data : ");
	scanf("%d",&data);

	struct Node *node = (struct Node*)malloc(sizeof(struct Node));
	node->data = data;
	node->next = node;

	node->next = head;
	tail->next = node;        // ?
	head = node;
}

void addAtLast(){

	int data;
	printf("Enter Data : ");
	scanf("%d",&data);

	struct Node *temp = head;
	struct Node *node = (struct Node*)malloc(sizeof(struct Node));
	node->data = data;
	node->next = node;
	
/*	while(temp->next != head){
		temp = temp->next;
	}
*/
//	temp->next = node;
//	node->next = head;
//	tail = node;

	// OR
	node->next = head;
	tail->next = node;
	tail = node;
}

void addAtPos(int pos){
	int data;
	printf("Enter Data : ");
	scanf("%d",&data);

	struct Node *temp = head;
	struct Node *node = (struct Node*)malloc(sizeof(struct Node));
	node->data = data;
	node->next = node;

	while(pos-2){
		temp = temp->next;
		pos--;
	}

	node->next = temp->next;
	temp->next = node;
	
}

void count(){
	int cnt = 0;
	struct Node *temp = head;
	do{
		temp=temp->next;
		cnt++;
	}while(temp != head);

	printf("%s %d","Total Nodes :",cnt);
}

void deleteFirst(){
	struct Node *temp = head;
	head = head->next;
	free(temp);
	tail->next = head;

	// OR
/*	
	head = head->next;
	free(tail->next);
	tail->next = head;
	*/
}

void deleteLast(){
	struct Node *temp = head;
	while(temp->next->next != head){
		temp = temp->next;
	}

 	temp->next = head;
	free(tail);
	tail = temp;

}

void deleteAtPos(int pos){
	struct Node *temp = head;
	struct Node *temp2 = NULL;

	while(pos-2){
		temp = temp->next;
		pos--;
	}

	temp2 = temp->next;
	temp->next = temp2->next;
	free(temp2);
}

void reverse(){
	struct Node *temp1 = head;
	struct Node *temp2 = NULL;
	struct Node *temp3 = tail;;

	while(temp2 != head){                               // temp1 ha head lach ahe tyamule condition fail hou shaktez
		temp2 = temp1->next;
		temp1->next = temp3;
		temp3 = temp1;
		temp1 = temp2;
	}

	head = temp3;
	tail = temp1;
}

void main(){
	struct Node *node = (struct Node*)malloc(sizeof(struct Node));
	head = node;
	tail = node;
	node->data = 10;
	node->next = node;

	char ch;
	int pos;

	do{
		printf("Singly Circular List : \n");
		printf("1.Print List : \n");
		printf("2.Count : \n");
		printf("3.addAtFirst : \n");
		printf("4.addAtLast : \n");
		printf("5.addAtPos : \n");
		printf("6.deleteFirst : \n");
		printf("7.deleteLast : \n");
		printf("8.deleteAtPos : \n");
		printf("9.Reverse : \n");

		int choice;
		printf("Enter Your Choice : \n");
		scanf("%d",&choice);

		switch(choice){
			case 1 :
				printNode();
				break;

			case 2 :
				count();
				printNode();
				break;

			case 3 :
				addAtFirst();
				printNode();
				break;
		
			case 4 :
				addAtLast();
				printNode();
				break;
		
			case 5 :
				printf("Enter Position For Add Node : ");
				scanf("%d",&pos);
				addAtPos(pos);
				printNode();
				break;
		
			case 6 :
				deleteFirst();
				printNode();
				break;	

			case 7 :
				deleteLast();
				printNode();
				break;	

			case 8 :
				printf("Enter Position For Add Node : ");
				scanf("%d",&pos);
				deleteAtPos(pos);
				printNode();
				break;

			case 9 :
				reverse();
				printNode();
				break;	
		
			default :
				printf("Wrong Choice \n");
				break;
		}

		printf("\ndo you want to continue?\n");
		getchar();
		scanf("%c",&ch);
		
	}while( ch == 'y' || ch == 'Y');
}
