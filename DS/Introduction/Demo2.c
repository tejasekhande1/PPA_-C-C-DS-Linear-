// POINTER : 1) Wild Pointer ---> int *ptr ; NON-PREDECTIBLE WHERE IT SEE/WHAT IT STORE
// 	     2) Null Pointer ---> int *ptr = NULL ;
// Some Compilers give 4 bytes for pointer -----> Turbo C
// Variable direct heap section var jat nahi....malloc chya memory cha fkt address basato..heap section deals with only addresses
// NOTE : DRAW DAIGRAM FOR EVERY QUESTION IN INTERVIEW

#include <stdio.h>
#include <stdlib.h>

int x = 10;                            // MEMORY ALLOCATED IN DATA SECTION
//int *ptr1 = NULL;
//int *ptr1 = (int*)malloc(sizeof(int));  // ERROR ---> MALLOC CANNOT BE DECLARE IN GLOBALLY

void fun(){
	int z = 30;                    // MEMORY ALLOCATED IN STACK OF FUN()
	int *ptr2 = NULL;
	int *ptr2 = (int*)malloc(sizeof(int));
}

void main(){
	
	malloc(sizeof(int));

	int y = 20;                    // MEMORY ALLOCATED IN MAIN SECTION
	int *ptr3 = NULL;
	int *ptr3 = (int*)malloc(sizeof(int));

	fun();
}
