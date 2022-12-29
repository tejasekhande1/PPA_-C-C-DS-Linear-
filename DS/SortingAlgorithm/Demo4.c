// SORTING USING PREDEFINED FUNCTIONS IN JAVA ...?
// ALGORITHMS USING LINKED LIST.....?
// ALL IN ONE

#include <stdio.h>

void printArray(int arr[],int len){
	for(int i = 0 ; i < len ; i++){
		printf("|%d|",arr[i]);
	}

	printf("\n");
}

void swap(int *iptr1,int *iptr2){
	int temp = *iptr1;
	*iptr1 = *iptr2;
	*iptr2 = temp;
}

void bubbleSort(int arr[],int len){
	for(int i = 0 ; i < len ; i++){
		for(int j = 0 ; j < len ; j++){
			if(arr[j] > arr[j+1]){
				swap(&arr[j],&arr[j+1]);
			}
		}
	}
}

void selectionSort(int arr[],int len){
	for(int i = 0 ; i < len ; i++){
		for(int j = i+1 ; j < len ; j++){
			if(arr[j] < arr[i]){
				swap(&arr[j],&arr[i]);
			}
		}
	}
}

void insertionSort(int arr[],int len){
	for(int i = 1 ; i < len ; i++){
		int temp = arr[i];
		int j = i-1;

		for(; j >= 0 && temp < arr[j] ; j--){
			arr[j+1] = arr[j];
		}

		arr[j+1] = temp;
	} 
}

void merge(int arr[],int start,int mid,int end){

	int x = mid - start + 1;
	int y = end - mid;

	int arr1[x],arr2[y];

	for(int i = 0 ; i < x ; i++){
		arr1[i] = arr[start + i];
	}
	
	for(int j = 0 ; j < y ; j++){
		arr2[j] = arr[mid + 1 + j];
	}

	int i = 0 , j = 0 , k = start ;

	while(i < x && j < y){
		if(arr1[i] < arr2[j]){
			arr[k] = arr1[i];
			i++;
		}else{
			arr[k] = arr2[j];
			j++;
		}

		k++;
	}

	while(i < x){
		arr[k] = arr1[i];
		k++;
		i++;
	}

	while(j < y){
		arr[k] = arr2[j];
		k++;
		j++;
	}
}

void mergeSort(int arr[],int start,int end){
	if(start < end){
		int mid = (start + end)/2;

		mergeSort(arr,start,mid);
		mergeSort(arr,mid+1,end);

		merge(arr,start,mid,end);
	}
}

void main(){

	char ch;
	int choice;

	int arr[] = {8,5,7,11,10,9,6,4};
	int len = sizeof(arr)/sizeof(int);

	do{
		printf("Sorting Algorithms : \n");
		printf("1.Bubble Sort\n");
		printf("2.Selection Sort\n");
		printf("3.Inersion Sort\n");
		printf("4.Merge Sort\n");

		printf("Enter Your Choice : \n");
		scanf("%d",&choice);

		switch(choice){
			case 1 :
				printArray(arr,len);
				bubbleSort(arr,len);
				printArray(arr,len);
				break;

			case 2 :
				printArray(arr,len);
				selectionSort(arr,len);
				printArray(arr,len);
				break;

			case 3 :
				printArray(arr,len);
				insertionSort(arr,len);
				printArray(arr,len);
				break;

			case 4 :
				printArray(arr,len);
				int start = 0;
				int end = len-1;
				mergeSort(arr,start,end);
				printArray(arr,len);
				break;

			default :
				printf("Wrong Choice \n");
		}

		printf("Do you want to continue\n");
		getchar();
		scanf("%c",&ch);

	}while(ch == 'y' || ch == 'Y');
}
