// open() : used to read morethan one file

#include <iostream>
#include <fstream>
using namespace std;

int main(){

	ifstream infile;
	infile.open("founders.txt");

	string readData;

	while(infile){
		getline(infile,readData);
		cout<< readData <<endl;
	}

	infile.close();

	infile.open("c2w.txt");

	while(infile){
		getline(infile,readData);
		cout<< readData <<endl;
	}

	return 0 ;
}

// daigram last
