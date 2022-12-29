
// BINARY RECURSION : 

#include <stdio.h>

int fun(int x){

	if(x <= 0)
		return 1;

	printf("Hello\n");

	return fun(x-1) + fun(x-2);

/*
	int a = fun(x-1);
	int b = fun(x-2);
	return a+b;
*/

}

void main(){

	int val = fun(3);

	printf("%d\n",val);
}
