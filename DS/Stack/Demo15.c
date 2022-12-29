// STACK USING LINKEDLIST :
// addFirstApproached ----> BEST CASE
// FOR INTERVIEW WE SHOULD USE ISFULL() & ISEMPTY() CONDITIONS

#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node *next;
};

struct Node *head = NULL;


void push1(int data){
	struct Node *node = malloc(sizeof(struct Node));

	if(node == NULL){                            // isFull
		printf("Memory Full\n");
		exit(1);
	} 

		node->data = data;
		node->next = NULL;

		if(head == NULL){                    // here checked if(isFull())
			head = node;
		}else{
			node->next = head;
			head = node;
		}
	
}

int pop(){

	struct Node *temp = head;
	if(head == NULL){                         // here checked if(isEmpty())
		printf("StackUnderFlow\n");
		return ;
	}else{
		head = head->next;
		int ret = temp->data;
		free(temp);
		return ret;
	}

}

void printStack(){
	struct Node *temp = head;
	while(temp != NULL){
		printf("|%d|\n",temp->data);
		temp = temp->next;
	}		
}

void main(){

	pop();	

	push1(10);
	push1(20);
	push1(30);
	printStack();

	int rm = pop();
	printf("Poped Element is : |%d|\n",rm);

	rm = pop();
	printf("Poped Element is : |%d|\n",rm);

	rm = pop();
	printf("Poped Element is : |%d|\n",rm);

}

// IF THIER IS NO STACK FRAME AND CALLED TO POP FUNCTION AND RETURNED POP FUNCTION....
// FIRST APPROACH : IN MAIN WE CHECKED HEAD == NULL THEN CALL TO POP FUNCTION (BEST CASE)
