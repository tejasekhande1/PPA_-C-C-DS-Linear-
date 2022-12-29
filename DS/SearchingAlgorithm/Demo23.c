
// * INTERPOLATION SEARCH :
// -----> IF DIFF BETWEEN TWO ELEMENTS IN ARRAY IS SAME I.E. 10,20,30,40,50(UNIFORM ARRAY) --> ONE ATTEMPT SOLUTION

#include <stdio.h>

int cnt;

int interpolationSearch(int arr[],int len,int ele){

	cnt++;
	int start = 0;
	int end = len-1;

	while(start <= end){

		int index = start + (end - start) * (ele - arr[start]) / (arr[end]-arr[start]);

		if(arr[index] == ele)
			return index;

		if(arr[index] < ele)
			start = index+1;
		else if (arr[index] > ele)
			end = index-1;
	}

	return -1;
}

void main(){

//	int arr[] = {3,6,9,12,15,18,21,24,27,30};                   --> ONE ATTEMPT
	int arr[] = {3,9,12,15,18,21,24,25,27,30};                
	int len = sizeof(arr);

	int ele;
	printf("Enter Element To Search : \n");
	scanf("%d",&ele);

	int index = interpolationSearch(arr,len,ele);

	printf("%d\n",cnt);
	
	if(index != -1)
		printf("Element Found At Index : %d\n",index);
	else
		printf("Element is NOT Found\n");

}
