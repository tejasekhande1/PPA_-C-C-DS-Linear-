// 3-D Array : Two Plane , If Value is same in both plane then it will be increment by 1

#include <stdio.h>

void main(){

	int arr[2][3][3] = {{1,2,3,4,5,6,7,8,9},{10,20,30,4,50,60,70,80,90}};

	for(int plane=0 ; plane < 1 ; plane++){
		for(int row=0 ; row < 3 ; row++){
			for(int col=0 ; col < 3 ; col++){
				if(arr[0][row][col] == arr[1][row][col]){
					arr[0][row][col]++;
					arr[1][row][col]++;
				}
			}
		}
	}
	
	for(int plane=0 ; plane < 2 ; plane++){
		for(int row=0 ; row < 3 ; row++){
			for(int col=0 ; col < 3 ; col++){
				printf("%d ",arr[plane][row][col]);
			}

			printf("\n");
		}
	}
}
