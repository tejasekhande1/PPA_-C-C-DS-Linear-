// *TERNARY SEARCH : COMPLEXITY LARGE THAN BINARY SEARCH
// * INTERPOLATION SEARCH :
// -----> IF DIFF BETWEEN TWO ELEMENTS IN ARRAY IS SAME I.E. 10,20,30,40,50(UNIFORM ARRAY) --> ONE ATTEMPT SOLUTION

#include <stdio.h>

int ternarySearch(int arr[],int start,int end,int ele){

	if(start > end){
		return -1;
	}else{
		int mid1 = start+(end-start)/3;
		int mid2 = end-(end-start)/3;

		if(ele == arr[mid1])
			return mid1;

		if(ele == arr[mid2])
			return mid2;

		if(ele < arr[mid1])
			return ternarySearch(arr,start,mid1-1,ele);
			
		else if(ele > arr[mid2])
			return ternarySearch(arr,mid2+1,end,ele);
		else
			return ternarySearch(arr,mid1+1,mid2-1,ele);		
	}
}

void main(){

	int arr[] = {3,6,9,12,15,18,21,24,27,30};
	int len = sizeof(arr);

	int ele;
	printf("Enter Element To Search : \n");
	scanf("%d",&ele);

	int start = 0;
	int end = len-1;

	int index = ternarySearch(arr,start,end,ele);

	if(index != -1)
		printf("Element Found At Index : %d\n",index);
	else
		printf("Element is NOT Found\n");

}
