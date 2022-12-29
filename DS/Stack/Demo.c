// STACK : LIFO
// EXAMPLES : COLLECTION OF CD ; TIFFIN ; ICE-CREAM CONE ; SET OF CHAIR
// STACK IMPLEMENTED BY ARRAY AND LINKEDLIST
// arr[] = *arr

// ARRAY AS STACK : 

#include <stdio.h>

void push(int arr[],int top,int data){
	arr[0] = data;
	printf("%d\n",arr[0]);
}

void printStack(){

}

void main(){

	int arrStack[5];
	int top = -1;             // bcoz -1 is not valid index of Array

	push(arrStack,top,10);
	printf("%d\n",arrStack[0]);
}
