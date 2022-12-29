// FACTORIAL USING RECURSION :

#include <stdio.h>

/*
int myfact(int n){
	int fact = 1;
	for(int i=n ; i>0 ; i--){
		fact = fact*i;
	}

	return fact;
} */

/*

int fact(int x){

	static int myfact = 1;

	if(x >= 1){
		myfact = myfact*x;
		x--;
		fact(x);
	}else{
		return myfact;
	}
} */

int factorial(x){
	
	if(x == 1){
		return 1;
	}

	return x * factorial(x-1);                      // NON-TAIL RECURSION BCOZ X* OPERATION HERE
}

void main(){

	int n = 5;
	int ans = factorial(n);

	printf("%d\n",ans);
}

// Reverse Number
// Armstrong Number in Series - 1 to 500
// Palindrome
