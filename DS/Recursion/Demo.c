// RECURSION : CALLING A SPECIFIC FUNCTION AGAIN AND AGAIN

#include <stdio.h>

int count = 0 ;

void fun(){
	printf("In Fun : %d\n",count);
	count++;
	fun();
}

void main(){
	fun();
}
