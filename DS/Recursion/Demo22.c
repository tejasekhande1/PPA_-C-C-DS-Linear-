// REVERSE AN ARRAY :

#include <stdio.h>

/*
void revArray(int arr[],int n){
	int i = 0;
	while(i < n/2){
		int temp = arr[i];
		arr[i] = arr[n-i-1];                    // 5-0-1 = 4
		arr[n-i-1] = temp;
		i++;
	}

	for(int i=0 ; i<n ; i++){
		printf("|%d| ",arr[i]);
	}
}
*/

void myArray(int arr[],int n){
	static int i = 0;
	if(i == n/2)
		return;

	int temp = arr[i];
	arr[i] = arr[n-i-1];
	arr[n-i-1] = temp;
	i++;

	myArray(arr,n);
}

void main(){

	int arr[5] = {10,20,30,40,50};        		  // sizeof(arr)/sizeof(int)

//	int n = sizeof(arr)/sizeof(int);            ---> when size is not declared

//	revArray(arr,5);

	myArray(arr,5);
}
