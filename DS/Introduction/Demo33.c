// DAIGRAM

#include <stdio.h>

void fun(int **iptr2){
	**iptr2 = 30;
}

void main(){

	int x = 10;
	int *iptr = &x;

	fun(&iptr);

	printf("%d\n",x);
}
