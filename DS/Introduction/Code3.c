
#include <stdio.h>

void main(){

	int arr[10];
	int ele;
	int flag = 0 ;
	int n;

	printf("Enter Number Of Elements For Array : \n");
	scanf("%d",&n);

	printf("Enter Elements In Array : \n");

	for(int i=0 ; i<n ; i++){
		scanf("%d",&arr[i]);
	}

	printf("Enter Your Element For Check : \n");
	scanf("%d",&ele);

	for(int i=0 ; i<5 ; i++){
		if(arr[i] == ele){
			flag++;
		}
	}

	if(flag > 0){
		printf("Your Number Ocuurs : " "%d %s",flag ,"Times\n");
	}else{
		printf("Your Number is Absent\n");
		int pos = 1 ;

		printf("Modified Array With Absent Number : \n");
		for(int i = n-1 ; i>= pos - 1 ; i--){
			arr[i+1] = arr[i];
		}
		
		arr[0] = ele ;

		for(int i=0 ; i <= n ; i++){
			printf("%d ",arr[i]);
		}	
	}
}
