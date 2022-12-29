// BINARY SEARCH : COMPULSORY SORTED ARRAY
// MERGESORT : 
// DRYRUN THIS CODE
// EASY WAY ; FIND BEST WAY OF THIS CODE

#include <stdio.h>

void merge(int arr[],int start,int mid,int end){

	int x = mid - start + 1;
	int y = end - mid;

	int nArray1[x],nArray2[y];

	for(int i=0 ; i < x ; i++){

		nArray1[i] = arr[start + i];
	}

	for(int j = 0 ; j < y ; j++){

		nArray2[j] = arr[mid+1+j];
	}

	int i = 0 , j = 0 , t = start;

	while(i < x && j < y){
		if(nArray1[i] < nArray2[j]){
			arr[t] = nArray1[i];
			i++;
		}else{
			arr[t] = nArray2[j];
			j++;
		}

		t++;
	}

	while(i < x){
		arr[t] = nArray1[i];
		i++;
		t++;
	}
	
	while(j < y){
		arr[t] = nArray2[j];
		j++;
		t++;
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

	int arr[] = {7,25,18,11,5,2,13,1};
	int len = sizeof(arr)/sizeof(int);

	int start = 0;
	int end = len-1;

	printf("Array Before Sorted\n");

	for(int i = 0 ; i<len ; i++){
		printf("|%d|",arr[i]);
	}

	printf("\n");
	
	mergeSort(arr,start,end);

	printf("Array Before Sorted\n");

	for(int i = 0 ; i<len ; i++){
		printf("|%d|",arr[i]);
	}

	printf("\n");
}
