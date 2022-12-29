// INSERTION SORT : 
// REAL TIME EXAMPLE : ARRANGEMENT OF STUDENT ACCORDING TO THEIR HIGHT IN MIXED HIGHT ARRANGEMENT IN A ROW (NO-SWAPPING)
// INTERVIEWER QUIZ : ONE SORTED AND ONE UNSORTED ARRAY THEN TRANSFER THAT ELEMENTS IN SORTED ARRAY

#include <stdio.h>

void insertionSort(int arr[],int len){
	for(int j = 1 ; j < len ; j++){                     // UNSORTED LIST
		int temp = arr[j];
		int i;

		for( i = j-1 ; i>=0 && temp<arr[i] ; i--){
			arr[i+1] = arr[i];
		}

		arr[i+1] = temp;
	}
}

void myInsertionSort(int arr[],int len){
	static int j = 1;
	if(j == len)
		return;

		int temp = arr[j];
		int i;

		for( i = j-1 ; i>=0 && temp<arr[i] ; i--){
			arr[i+1] = arr[i];
		}

		arr[i+1] = temp;
	 	
		j++;

		myInsertionSort(arr,len);
	
}

void main(){
	int arr[] = {4,11,7,5,2,9,3};
	int len = sizeof(arr)/sizeof(int);

	printf("Array Before Sort : \n");
	for(int i = 0 ; i<len ; i++){
		printf("|%d|",arr[i]);
	}

	//insertionSort(arr,len);
	myInsertionSort(arr,len);
	
	printf("\nArray After Sort : \n");
	for(int i = 0 ; i<len ; i++){
	printf("|%d|",arr[i]);
	}

	printf("\n");
}
