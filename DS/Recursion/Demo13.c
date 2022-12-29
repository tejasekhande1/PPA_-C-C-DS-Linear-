// static local asla tari toh global sarkha treat hoto ; HEAP SECTION LA MEMORY ALLOCATE HOTEi
// DIFF : STATIC VS NON-STATIC

#include <stdio.h>

int add = 0;

void sum(){
	for(int i=1 ; i<=10 ; i++){
		add = add + i;
	}

	printf("%d\n",add);
}

//int i = 1;

int sumNum(){

	static int addNum = 0;
	static int i = 1;

	if(i<=10){
		addNum = addNum+i;
		i++;
		sumNum();
	}

	// printf("%d\n",add);  -------> NON-TAIL RECURSION
	// IF RECURSION CALL AT THE LAST LINE IS CALLED TAIL RECURSION

	return addNum;
}

int myadd(int x){

	if(x == 1)
		return 1;
	
	return x + myadd(x-1);             // NON TAIL RECURSION DUE TO ADDITION OPERATION
}

void main(){

	int x = sumNum();
	printf("%d\n",x);

	int y = myadd(5);
	printf("%d\n",y);
}
