#include <stdio.h>
#include <stdlib.h>

struct Info{
	int age;
	float height;
	struct Info *next;
};

void main(){

	printf("First Node : \n");

	struct Info *head = (struct Info*)malloc(sizeof(struct Info));
	struct Info *temp = head;

	temp->age = 21;
	temp->height = 5.2;
	temp->next = NULL ;
	while( temp != NULL){
		printf("|%d|",temp->age);
		printf(" |%f|",temp->height);
		printf(" |%p|\n",temp->next);
		temp = temp->next;
	}

	printf("First Two Nodes : \n");

	struct Info *second = (struct Info*)malloc(sizeof(struct Info));
	struct Info *temp3 = second;
	struct Info *temp2 = head;

	temp3->age = 19;
	temp3->height = 6.2;
	temp3->next = NULL ;
	temp2->next = temp3;

	while( temp2 != NULL){
		printf("|%d|",temp2->age);
		printf(" |%f|",temp2->height);
		printf(" |%p|\n",temp2->next);
		temp2 = temp2->next;
	}

	printf("First Three Nodes : \n");

	struct Info *third = (struct Info*)malloc(sizeof(struct Info));
	struct Info *temp4 = third;
	struct Info *temp5 = head;

	temp4->age = 23;
	temp4->height = 4.7;
	temp4->next = NULL ;
	temp3->next = temp4;

	while( temp5 != NULL){
		printf("|%d|",temp5->age);
		printf(" |%f|",temp5->height);
		printf(" |%p|\n",temp5->next);
		temp5 = temp5->next;
	}

	printf("All Four Nodes : \n");

	struct Info *four = (struct Info*)malloc(sizeof(struct Info));
	struct Info *temp6 = four;
	struct Info *temp7 = head;

	temp6->age = 25;
	temp6->height = 6.3;
	temp6->next = NULL ;
	temp4->next = temp6;

	while( temp7 != NULL){
		printf("|%d|",temp7->age);
		printf(" |%f|",temp7->height);
		printf(" |%p|\n",temp7->next);
		temp7 = temp7->next;
	}
}
