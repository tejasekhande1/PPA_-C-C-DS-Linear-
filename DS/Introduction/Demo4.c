//  void pointer mainly used in malloc function
// int *ptr; ----> Wild Pointer ----> Error : Segmentation Fault --> Recover this used NULL pointer
// Danglin Pointer : For Check value assigned or not to any pointer (Common friend in two couples)
// DYNAMIC MEMORY ALLOCATION : RUNTIME MEMORY ALLOCATION	
// 1] MALLOC() ---> #INCLUDE <STDLIB.H>  ----> Memory Allocation In Heap

#include <stdio.h>
//#include <stdlib.h>
void* malloc(size_t);

void main(){

	void *vptr = malloc(sizeof(int));

	int *iptr = (int*)vptr;

	*iptr = 20;

	printf("%d\n",*iptr);
}
