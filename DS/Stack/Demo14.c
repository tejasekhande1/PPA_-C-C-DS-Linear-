// STACK USING LINKEDLIST :
// addLastApproached ----> WROST CASE

#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node *next;
};

struct Node *head = NULL;
struct Node *top = NULL;

void push(int data){

	// addLastApproached ----> Wrost Case

	struct Node *node = (struct Node*)malloc(sizeof(struct Node));
	node->data = data;
	node->next = NULL;

	top = node;

	if(head == NULL){
		head = node;
	}else{
		struct Node *temp = head;
		while(temp->next != NULL){
			temp = temp->next;			
		}	
		temp->next = top;
	}
}

int pop(){

	struct Node *temp = head;
	int val;
	
	if(head->next == NULL){
		return head->data;
	}else{
		while(top->next->next != NULL){
			top = top->next;
		}
	
		temp = top->next;
		top->next = NULL;
		val = temp->data;
		free(temp);
		top = head;

		return val;
	}
	
}

void printStack(){
		
	struct Node *temp = head;
	while( head != top){
		while(temp->next != top){
			temp = temp->next;
		}
	
		printf("|%d|\n",top->data);
		top = temp;
		temp = head;
	}

	printf("|%d|\n",top->data);               // if head == top
}

void main(){

	push(10);
	push(20);
	push(30);
	printStack();
	printf("==================\n");
	
	int rm = pop();
	printf("|%d|\n",rm);

	rm = pop();
	printf("|%d|\n",rm);

	rm = pop();
	printf("|%d|\n",rm);
}
