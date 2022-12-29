// IN MEMORY SORTING ....?    ; MERGE/QUICK ---> IMP FOR INTERVIEW
// BUBBLE SORT : IN FIRST ITERATION,FORWARD LARGEST NUMBER AT THE END OF ARRAY (IN ACCENDING)

#include <stdio.h>

int count;

/*  WROST CASE
void bubbleSort(int arr[],int len){
	for(int i = 0 ; i <= len-1 ; i++){
		count++;                                           // 28 IN BOTH CONDITION SORTED/UNSORTED
		for(int j = 0 ; j <= len-i-1 ; j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}
*/

/*
void bubbleSort(int arr[],int len){               // OPTIMIZED BUBBLE SORT CODE

	int flag = 0;
	for(int i = 0 ; i <= len-1 ; i++){
		for(int j = 0 ; j < len-i-1 ; j++){
			count++;                                             // 7 IF ALREADY SORTED; 21 IF UNSORTED
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;

				flag = 1;
			}
		}

		if(flag == 0)
			break;
	}
} */

void myBubbleSort(int arr[],int len){                       // RECURSIVE APPROACHED

	static int flag = 0;

	if(len == 1)
		return;

	for(int i = 0 ; i <= len-1 ;i++){
		if( arr[i] > arr[i+1]){
			int temp = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = temp;
			flag = 1;
		}
	}

	if(flag == 0)
		return;

	myBubbleSort(arr,len-1);
}

void main(){

//	int arr[10] = {7,24,3,5,19,18,9};
	int arr[] = {7,24,3,5,19,18,9};                         //     ---> VERITAS

//	int arr[10];

	printf("Enter Size Of An Array (Less than 10) : ");
	int len = sizeof(arr)/sizeof(int);
	
	printf("Array Before Sorting : \n");
	for(int i = 0 ; i <= len-1 ; i++){
		printf("|%d|",arr[i]);
	}

//	bubbleSort(arr,len);

	myBubbleSort(arr,len);

	printf("\nArray After Sorting : \n");
	
	for(int i = 0 ; i <= len-1 ; i++){
		printf("|%d|",arr[i]);
	}

	printf("\n");
}
