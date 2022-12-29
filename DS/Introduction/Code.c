
#include <stdio.h>
 
void main(){

  	 int array[100];
  	 int n,position,value;

	   printf("Enter number of elements in array : \n");
	   scanf("%d",&n);
 
	   printf("Enter %d elements : \n",n);
 
	   for(int i = 0; i < n; i++){
		   scanf("%d", &array[i]);
	   	}
 
	   printf("Enter the location where you wish to insert an element : \n");
  	   scanf("%d", &position);
 
	   printf("Enter the value to insert : \n");
	   scanf("%d", &value);
 
	   for(int i = n - 1 ; i >= position - 1 ; i--){
		   array[i+1] = array[i];
		}

	   array[position-1] = value;
 
	   printf("Modified Array is : \n");
 
	   for(int i = 0; i <= n; i++){
		   printf("%d\n", array[i]);
	   	}
}
