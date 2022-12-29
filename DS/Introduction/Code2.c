// TO CHECK ELEMENT PRESENT IN ARRAY : 

#include <stdio.h>

void main(){

	int flag;
	int ele;
	int arr[5];

	printf("Enter Values : \n");

	for(int i=0 ; i<5 ; i++){
		scanf("%d",&arr[i]);
	}
	
	printf("Enter Element For Search : \n");
	scanf("%d",&ele);
	
	for(int i=0 ; i < 5 ; i++){
		if( arr[i] == ele){
			printf("Element Present In Array\n");
			flag = 1 ;
			break;
		}
	}	

	if(flag == 0){
		printf("Element Absent In Array\n");
	}
}
