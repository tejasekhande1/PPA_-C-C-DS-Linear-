// ALLOCATE MEMORY TO STRUCTURE USING NEW : 

#include <iostream>
using namespace std;

struct Player{
	char pName[10] = "Rohit";
	int jerNo = 45;
	char cName[10] = "India";
	float sal = 250.00;
};

void passCric(struct Player *cric){
	cout << cric->pName << endl;
	cout << cric->jerNo << endl;
	cout << cric->cName << endl;
	cout << cric->sal << endl;
}

int main(){
	
	struct Player *obj = new Player();
	passCric(obj);

	return 0;
}

// DAIGRAM
// structure vs class
