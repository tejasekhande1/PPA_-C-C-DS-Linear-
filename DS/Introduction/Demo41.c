#include <stdio.h>

void main(){
	
	int arr[4] = {10,20,30,40};

	int *iptr = arr;
	printf("%d\n",*iptr);

	iptr++;
	printf("%d\n",*iptr);

	iptr+3;	                         // he value store nahi keli mhnun output 20 yete....java madhe error yetoy
	iptr = iptr+3;                   // Garbage Value  (Java madhe error)
	printf("%d\n",*iptr);
}
