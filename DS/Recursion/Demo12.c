// DEFINE INDIRECT RECURSION : MAIN()->FUN()->RUN()
// DEFINE DIRECT RECURSION : MAIN()->FUN()->FUN()

#include <stdio.h>

int i = 5;

void printNum(){
	if(i <= 10){
		printf("%d\n",i);
		i++;
		printNum();
	}
}

void main(){
	printNum();
}
