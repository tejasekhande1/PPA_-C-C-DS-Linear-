
// C PROGRAM TO CHECK STRING PALINDROME USING RECURSION OR NORMAL METHOD ?

#include <stdio.h>
#include <stdbool.h>

/*
_Bool peliStr(char str[],int len){
	int i = 0 ;

	while( i < len/2){
		if(str[i] == str[len-i-1]){
			i++;
		}else{
			return false;
		}
	}

	return true;
} */

_Bool myPeliStr(char str[],int len){

	static int i = 0;

	if(i > len/2)
		return true;
	if(str[i] != str[len-1-i])
		return false;

	i++;

	myPeliStr(str,len);
	
}

/*
int myStrLength(char str[]){
	int cnt = 0;
	while(str != '\n'){
		str++;
		cnt++;
	}

	return cnt;
}
*/

void main(){

	char str[] = "racecar";
	int len = sizeof(str);

	//	int len = myStrLength(str);

	//	int len = sizeof(str)/8;

	//	_Bool value = peliStr(str,len-1);
	
	_Bool value = myPeliStr(str,len-1);

	if(value == true)
		printf("String is Palindrome\n");
	else
		printf("String is Not Palindrome\n");
}
