
// realloc 
//
#include <stdio.h>
#include <stdlib.h>

void main(){

	void *vptr = malloc(3*sizeof(int));
	int *iptr = (int*)vptr;
	int x = 10;

	for(int i=0 ; i<=2 ; i++){
		*iptr = x;
		x= x+10;
		iptr++;
	}
	
	iptr = (int*)vptr;
	
	for(int i=0 ; i<=2 ; i++){
		printf("%d\n",*iptr);
		iptr++;
	}

	void *vptr2 = realloc(vptr,2*sizeof(int));
	int *iptr2 = (int*)vptr2;
	
	iptr2 = iptr;

	for(int i=0 ; i<2 ; i++){
		*iptr2 = x ;
		x = x+10;
		iptr2++;
	}

	iptr = (int*)vptr2;
	
	for(int i=0 ; i<=4 ; i++){
		printf("%d\n",*iptr);
		iptr++;
	}
}
