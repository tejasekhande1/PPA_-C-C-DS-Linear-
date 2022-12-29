// FUNCTION RETURNING VALUES : ARRAY CANNOT BE RETURNED
// WE RETURN MULTIPLE VALUES THROUGH A FUNCTION BY USING POINTER 

#include <stdio.h>

int fun(int *x,int *y){
	*x = *x + 1 ;
	*y = *y - 1 ;

	printf("%d\n%d\n",*x,*y);
}

void main(){

	int x = 10;
	int y = 20;

	fun(&x,&y);

	printf("%d\n%d\n",x,y);
}
