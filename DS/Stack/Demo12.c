// ARRAY AS STACK :

#include <stdio.h>
#include "myHeader.h"   

int sarr[size];
int top = -1;

void push(int data){

	if(top == size-1){
		printf("Stack OverFlow\n");
		return 1;                                // ITHUN CODE BREAK HOVA MHNUN RETURN
	}

	top++;
	sarr[top] = data;
}

int pop(){      
	
	if(top == -1){                                   // if(0) --> FALSE ; BREAK FALLS STATEMENT
		printf("Stack UnderFlow\n");
		return -1;	
	}

	top--;

	return sarr[top+1];
}

void printStack(){
	for(int i=top ; i >= 0 ; i--){
		printf("|%d|\n",sarr[i]);
	}
}

void isEmpty(){

}

int isFull(){

	if(top == size-1){
		return 1;          // IF FULL THEN RETURN 1
	}

	return 0 ;                  // IF NOT FULL THEN RETURN 0
}

void main(){

	char ch;

	do{
		printf("1.push\n");
		printf("2.pop\n");
		printf("3.print\n");
		printf("4.isEmpty\n");
		printf("5.isFull\n");

		int choice;
		printf("Enter Your Choice : \n");
		scanf("%d",&choice);

		switch(choice){
			case 1 :
				{
					int data;
					printf("Enter Data : \n");
					scanf("%d",&data);
					push(data);
				}
				break;
				
			case 2 :
				{
					int rm;
					rm = pop();
					if( top != -1)           				   // FOR AVOID : IF STACK IS EMPTY THEN PRINT 1 
						printf("Popped Element is : |%d|\n",rm);
				}
					break;
				
			case 3 :
				printStack();
				break;
				
			case 4 :
				isEmpty();
				break;
				
			case 5 :
				isFull();
				break;

			default :
				printf("Wrong Choice\n");
				
		}

		printf("Do You Want To Continue : \n");
		getchar();
		scanf("%c",&ch);

	}while( ch == 'y' || ch == 'Y');
}
