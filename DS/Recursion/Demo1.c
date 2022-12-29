// break statement cannot execute without in loop and switch statements

#include <stdio.h>

int x = 1;  // if x = 0 then print statement execute 11 times

void fun(){	

	printf("In Fun : %d\n",x);

	if(x < 10){
		x++;
		fun();
	}
}

void main(){
	fun();
}
