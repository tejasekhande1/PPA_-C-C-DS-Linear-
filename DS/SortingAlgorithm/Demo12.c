// SELECTION SORT : IN FISRT ITERATION, SMALLEST VALUE IN ARRAY STORED AT THE FIRST INDEX OF ARRAY

#include <stdio.h>
/*
void selectionSort(int arr[],int len){

	int flag = 0;

	for(int i=0; i < len ; i++){
		for(int j=i+1 ; j < len ; j++){
			if(arr[i] > arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
				flag = 1;
			}
		}

		if(flag == 0)
			break;
	}
}
*/

void mySelectionSort(int arr[],int len){

	static int i = 0;

	if( i == len)
		return;

	for(int j=i+1; j < len ; j++){
		if(arr[i] > arr[j]){
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
	
	i++;
	mySelectionSort(arr,len);
}

void main(){

	int arr1[] = {7,24,3,5,19,18,9};
	int arr[] = {7,3,11,26,22,4,16};
	int len = sizeof(arr)/sizeof(int);

	printf("Array Before Sorting : \n");
	for(int i=0 ; i < len ; i++){
		printf("|%d|",arr[i]);
	}

	mySelectionSort(arr,len);

	printf("\nArray After Sorting : \n");
	for(int i=0 ; i < len ; i++){
		printf("|%d|",arr[i]);
	}

	printf("\n");
}
