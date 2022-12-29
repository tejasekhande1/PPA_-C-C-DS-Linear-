// Structure in C and C++
// C vs C++ : In C we cannot initialized variables in Struct , Declare by creating an object ; In C++ we can directly declare variables in structure
// Also We use strcpy(bName,"2 States") in C++
// In C string assignment not allowed i.e. we used char bName[10] ; Allowed in C++
// In C we must create an object to initialized Values ; Not neccessary in C++

#include <stdio.h>
struct Book{
	char bName[10];
	char aName[10];
	int pages;
	float price;
};

void main(){
	struct Book obj = {"2 State","TEJAS",350,450.50};
	printf("%s\n",obj.bName);
	printf("%s\n",obj.aName);
	printf("%d\n",obj.pages);
	printf("%f\n",obj.prize);
}
