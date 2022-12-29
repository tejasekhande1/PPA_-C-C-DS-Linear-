
#include <stdio.h>

int xyz(int x){

	if(x >= 30)
		return x;

	int a = 10;
	int t;
	x = a + x;

	xyz(x);                       // IF LAST LINE THEN OUTPUT 30

	printf("%d\n",x);

	t = 50;				// NOT ANY IMPACT
}

void main(){
	printf("%d\n",xyz(10));
}

// 30
// 20
// 3 ---> % d \n
// BCOZ ---> 
// 1] LAST LINE FUNCTION CALL => FUNCTION RETURN VALUE
// 2] LAST LINE NOT A FUNCTION CALL => LAST LINE OUTPUT VALUE RETURN
//
// TAIL RECURSION : NOT NEED TO DECLARE RETURN
// NON-TAIL RECURSION : IT RETURNS LAST LINE VALUE 
