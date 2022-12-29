
#include <iostream>
#include <fstream>
using namespace std;

int main(){

	ofstream outfile("founders");

	string inputData;
	cout<<"Enter Data : "<<endl;

	do{
		getline(cin,inputData);
		outfile << inputData;

	}while(inputData == " ");

	outfile.close();

	return 0 ;
}

// Input user kadun ghetlyavr to space nantr cha containt acceppt karat nahi..toh ekch string consider karto
// Elon Musk -> Elon
// For avoid this problem : use looping concept
