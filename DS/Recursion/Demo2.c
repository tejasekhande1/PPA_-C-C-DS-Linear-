// SUM OF DIGITS
// STATIC VARIABLE DECLARE KELA TAR TYALA VALUE ASIGN KARAVICH LAGTE (static int x; ---> NOT VALID)
// DAIGRAM

#include <stdio.h>

/*
void SumOfDigit(int x){

	int rem;
	int sum = 0;

	while(x != 0){
		rem = x % 10;
		sum = sum + rem;
		x = x /10;
	}

	printf("%d\n",sum);
}
*/

int sumOfDigit(int x){

	static int sum = 0 ;
       	static int rem = 0 ;

	if(x == 0)
		return sum;

	rem = x % 10;
	sum = sum + rem;

	sumOfDigit(x/10);
}	

int sumOfNum(int y){
	
	static int sum = 0 ;
	static int rem = 0 ;

	if(y == 0)
		return sum;

	return y % 10 + sumOfNum(y/10);
}

void main(){

	int num = 235;
	printf("%d\n",sumOfDigit(num));
	
	printf("%d\n",sumOfNum(num));

}

// STATIC SUM IS LOCAL THEN WHY IT RETURN VALUE 10 IN MAIN ?
// ----> LAST STACK FRAME MADHLI VALUE RETURN KELI TR BY DEFAULT PREVIOUS STACK MADHE LAST LA RETURN VALUE ASTE
