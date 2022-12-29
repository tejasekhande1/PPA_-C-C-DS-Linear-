
#include <stdio.h>

int cnt = 0;

int fun(int x){
	
	cnt++;

	if(x <= 0)
		return 100;

	fun(x-1);

	printf("Hello\n");

	fun(x-2);

	printf("Hello 2\n");
}

void main(){

	fun(3);

	printf("%d\n",cnt);
}

// hello
// hello2
// hello
// hello2
// hello
// hello
// hello2
// hello2
// 9
