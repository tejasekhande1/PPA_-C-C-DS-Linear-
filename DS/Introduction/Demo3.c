// VOID POINTER : Generic Pointer
// WE cannot be dereference of void pointer. We must be typecaste void pointer in specific type

#include <stdio.h>

void main(){
	
	int x = 10;
	void *iptr = &x ;

	printf("%d\n",*((int*)iptr)); 
}

// ((int*)iptr) -----> Address La Pohchato
// *((int*)iptr) -----> Value 
