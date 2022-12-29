// By Three Methods We Can Pass Strcutre To A Function :
// 1) fun(whole struct
// 2) fun(single member)
// 3) fun(pointer of struct)

#include <stdio.h>
struct Player{

	char pName[10];
	int jerNo;
	char cName[10];
	float sal;
} bb = {"Kobe",20,"USA",57.34};

void passCric(struct Player* cric){
	printf("%s\n",cric->pName);
	printf("%d\n",cric->jerNo);
	printf("%s\n",cric->cName);
	printf("%f\n",cric->sal);
}

void passFb(struct Player fb){
	printf("%s\n",fb.pName);
	printf("%d\n",fb.jerNo);
	printf("%s\n",fb.cName);
	printf("%f\n",fb.sal);
}

void passBB(struct Player bb){
	printf("%s\n",bb.pName);
	printf("%d\n",bb.jerNo);
	printf("%s\n",bb.cName);
	printf("%f\n",bb.sal);
} 

void singleMem(char name[]){
	printf("%s\n",name);
}

void main(){

	struct Player cric = {"Rohit",45,"India",30.25}; 
	struct Player fb = {"Messi",10,"Argentina",43.25}; 

	struct Player *cptr = &cric;
	struct Player *fptr = &fb;
	
	passCric(cptr);
	passFb(fb);
	passBB(bb);

	singleMem(cric.pName);
	
	printf("%ld\n",sizeof(struct Player));
}
