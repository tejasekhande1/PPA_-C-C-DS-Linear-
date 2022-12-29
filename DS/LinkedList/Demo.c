// Real Time Example : Batting Order Of Ind Team in WC Final 2011
// NON-SEQUENTIAL DATA AND MEMORY : 
// String Mdhe change karaycha asel tr char[] and nasel tr char*
// INTERVIWE QUIZ : PRINT LINKEDLIST IN REVERSE ORDER ; LINKED LIST IN PLACE REVERSE KAR
// head : heap section mdhe vaarible vaigere nastat tr node cha address trace karaycla use karto

#include <stdio.h>
#include <stdlib.h>

struct Node{
	char ch;
	struct Node *next;
};

void main(){
//	struct Node var1;                         --> Memory In Data Section

	struct Node *head = (struct Node*)malloc(sizeof(struct Node));   // pointer to structure
	head->ch = 'A';
//	head->next = NULL;
	printf("%c\n",head->ch);
//	printf("%p\n",head->next);      ---> nill

	struct Node *second = (struct Node*)malloc(sizeof(struct Node));   // pointer to structure
	second->ch = 'B';
//	second->next = NULL;                      		 ----> NOT NECESSARY
	printf("%c\n",second->ch);		// B
	head->next = second ;    				// Link 1st Node to 2nd Node
	printf("%c\n",head->next->ch);           // B

	struct Node *third = (struct Node*)malloc(sizeof(struct Node));   // pointer to structure
	third->ch = 'C';
//	third->next = NULL;
	second->next = third ;

	printf("%ld\n",sizeof(struct Node));

	while(head != NULL){
		printf("|%c|",head->ch);
		printf(" %p|\n",head->next);
//		printf(" %p|->\n",head->next);       ---> LinkedList Structure
		head = head->next;
	}
}

// agodr node create karaychi nantr next cha address assigned karaychi
// WHY USED MALLOC IN LL ----> MEMORY DYNAMICALLY/RUN TIME LA ALLOCATED ; UNKNOWN NO OF DATA ; DIRECT RUN TIME LA YETE
// ARR[] LA RUNTIME LA MEMORY BHETTE ; RUNTIME LA MEMORY DILELI NASEL TARI GARBAGE VALUE DETE
