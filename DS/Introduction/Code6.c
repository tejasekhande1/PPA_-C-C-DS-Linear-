// 2-D Array : Daigonal Matrix
// 0 2 3
// 4 0 6
// 7 8 0

#include <stdio.h>

void main(){

	int arr[3][3] = {1,2,3,4,5,6,7,8,9};

	for(int i=0 ; i<3 ; i++){
		for(int j=0 ; j<3 ; j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	for(int i=0 ; i<3 ; i++){
		for(int j=0 ; j<3 ; j++){
			if( i == j)
				arr[i][j] = 0;
		}
	}

	for(int i=0 ; i<3 ; i++){
		for(int j=0 ; j<3 ; j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
