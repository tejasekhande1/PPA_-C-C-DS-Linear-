// LinkedList Reverse : MOST IMPORTANT QUESTION
// 1] Normal/swap Reverse : Data Change
// 2] In-Place Reverse : Addresses Change

#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node *next;
};

struct Node *head = NULL;

int count(){
	int count = 0;
	struct Node *temp = head;
	while(temp != NULL){
		count++;
		temp = temp->next;
	}

//	printf("%d\n",count);
	return count;
}

void swapReverse(){

	// test case : linked list is empty

	struct Node *temp1 = head;
	struct Node *temp2 = head;

	int cnt = count();
//	printf("%d\n",cnt);
	int x = 0 ;

	while(x < (cnt/2)){                            // for swap
	
		int num = 1;	
		while(num < cnt-x){
			temp2 = temp2->next;
			num++;
		}

		int swap = 0;
		swap = temp2->data;
		temp2->data = temp1->data;
		temp1->data = swap;

		temp2 = head;
		temp1 = temp1->next;

		x++;
	}

}

void placeReverse(){
	struct Node *temp1 = head;
	struct Node *temp2 = NULL;
	struct Node *temp3 = NULL;

	while(temp1 != NULL){
		temp2 = temp1->next;
		temp1->next = temp3;
		temp3 = temp1;
		temp1 = temp2;
	}

	head = temp3;

}

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

void main(){

	struct Node *node = (struct Node*)malloc(sizeof(struct Node));
	head = node;
	node->data = 10;
	node->next = NULL;

	struct Node *node2 = (struct Node*)malloc(sizeof(struct Node));
	node2->data = 20;
	node2->next = NULL;
	node->next = node2;

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

	printNode();
	printf("\n");

	swapReverse();
	printNode();
	printf("\n");
/*
	placeReverse();
	printNode();
	printf("\n");
*/
}
