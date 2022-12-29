// ALLOCATE MEMORY TO STRUCTURE USING MALLOC :

#include <stdio.h>
#include <string.h>
void* malloc(size_t);

struct Player{
	char pName[10];
	int jerNo;
	char cName[10];
	float sal;
};

void passCric(struct Player* cric){
	printf("%s\n",cric->pName);
	printf("%d\n",cric->jerNo);
	printf("%s\n",cric->cName);
	printf("%f\n",cric->sal);
}

void mystrcpy(char *pName,char *str){
	while(*str != '\0'){
		*pName = *str;
		pName++;
		str++;
	}
}

void main(){

//	void *vptr = malloc(sizeof(struct Player));
//	struct Player *cptr = (struct Player*)vptr;

	struct Player *cptr = (struct Player*)malloc(sizeof(struct Player));

//	strcpy(cptr->pName,"Rohit Sharma");
	mystrcpy(cptr->pName,"Rohit Sharma");       // cptr->pName = address of first element oof an array
	cptr->jerNo = 18;
	mystrcpy(cptr->cName,"India");
//	strcpy(cptr->pName,"Rohit Sharma");
	cptr->sal = 30.25;

	passCric(cptr);
}
