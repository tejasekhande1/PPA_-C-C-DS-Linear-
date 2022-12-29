
#include <stdio.h>

int linearSearch(int arr[],int x,int len){

	static int i = 0;

	if(i >= len)
		return -1;
	
	if(arr[i] == x)
		return i;

	i++;

	linearSearch(arr,x,len);
}

void main(){

	int arr[] = {25,13,7,11,24,5,14,17};
	int num;

	int len = sizeof(arr)/sizeof(int);

	printf("Enter Your Number : ");
	scanf("%d",&num);

	int index = linearSearch(arr,num,len);

	if(index != -1)
		printf("Element Found At Index : %d\n",index);
	else
		printf("Element is NOT Found");

}
